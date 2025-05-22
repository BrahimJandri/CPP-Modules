#include "PmergeMe.hpp"

bool isNumber(const std::string &str)
{
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
    {
        if (!std::isdigit(*it))
            return false;
    }
    return !str.empty();
}

void parseInput(int argc, char **argv, std::vector<int> &vec, std::deque<int> &deq)
{
    for (int i = 1; i < argc; ++i)
    {
        std::string arg(argv[i]);
        if (!isNumber(arg))
            throw std::runtime_error("Error");
        std::istringstream iss(arg);
        int num;
        iss >> num;
        if (num < 0)
            throw std::runtime_error("Error");
        vec.push_back(num);
        deq.push_back(num);
    }
}

template <typename Container>
void printContainer(const std::string &prefix, const Container &container)
{
    std::cout << prefix;
    for (typename Container::const_iterator it = container.begin(); it != container.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

std::vector<int> generateJacobsthalVector(int n)
{
    std::vector<int> J;
    J.push_back(0);
    if (n == 1)
        return J;
    J.push_back(1);
    while (J.back() < n)
    {
        int next = J[J.size() - 1] + 2 * J[J.size() - 2];
        J.push_back(next);
    }
    return J;
}

std::deque<int> generateJacobsthalDeque(int n)
{
    std::deque<int> J;
    J.push_back(0);
    if (n == 1)
        return J;
    J.push_back(1);
    while (J.back() < n)
    {
        int next = J[J.size() - 1] + 2 * J[J.size() - 2];
        J.push_back(next);
    }
    return J;
}

void insertSmallIntoBigVec(std::vector<int> &big, const std::vector<int> &small)
{
    int n = small.size();
    if (n == 0)
        return;

    std::vector<int> jac = generateJacobsthalVector(n + 2);

    // Keep track of inserted indices
    std::vector<bool> inserted(n, false);

    // Insert in Jacobsthal order
    for (size_t i = 1; i < jac.size(); ++i)
    {
        int idx = jac[i] - 1; // Because Jacobsthal starts from 1-based
        if (idx >= 0 && idx < n && !inserted[idx])
        {
            std::vector<int>::iterator it = std::lower_bound(big.begin(), big.end(), small[idx]);
            big.insert(it, small[idx]);
            inserted[idx] = true;
        }
    }

    // Insert any remaining not covered by Jacobsthal
    for (int i = 0; i < n; ++i)
    {
        if (!inserted[i])
        {
            std::vector<int>::iterator it = std::lower_bound(big.begin(), big.end(), small[i]);
            big.insert(it, small[i]);
        }
    }
}

void insertSmallIntoBigDeq(std::deque<int> &big, const std::deque<int> &small)
{
    int n = small.size();
    if (n == 0)
        return;

    std::deque<int> jac = generateJacobsthalDeque(n + 2);

    // Keep track of inserted indices
    std::vector<bool> inserted(n, false);

    // Insert in Jacobsthal order
    for (size_t i = 1; i < jac.size(); ++i)
    {
        int idx = jac[i] - 1; // Because Jacobsthal starts from 1-based
        if (idx >= 0 && idx < n && !inserted[idx])
        {
            std::deque<int>::iterator it = std::lower_bound(big.begin(), big.end(), small[idx]);
            big.insert(it, small[idx]);
            inserted[idx] = true;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (!inserted[i])
        {
            std::deque<int>::iterator it = std::lower_bound(big.begin(), big.end(), small[i]);
            big.insert(it, small[i]);
        }
    }
}

void mergeInsertSort(std::vector<int> &container)
{
    if (container.size() <= 1)
        return;

    std::vector<int> big;
    std::vector<int> small;

    for (size_t i = 0; i + 1 < container.size(); i += 2)
    {
        if (container[i] > container[i + 1])
        {
            big.push_back(container[i]);
            small.push_back(container[i + 1]);
        }
        else
        {
            big.push_back(container[i + 1]);
            small.push_back(container[i]);
        }
    }

    if (container.size() % 2 == 1)
        big.push_back(container.back());

    std::sort(big.begin(), big.end());
    insertSmallIntoBigVec(big, small);
    container = big;
}

void mergeInsertSortDeq(std::deque<int> &container)
{
    if (container.size() <= 1)
        return;

    std::deque<int> big;
    std::deque<int> small;

    for (size_t i = 0; i + 1 < container.size(); i += 2)
    {
        if (container[i] > container[i + 1])
        {
            big.push_back(container[i]);
            small.push_back(container[i + 1]);
        }
        else
        {
            big.push_back(container[i + 1]);
            small.push_back(container[i]);
        }
    }

    if (container.size() % 2 == 1)
        big.push_back(container.back());

    std::sort(big.begin(), big.end());
    insertSmallIntoBigDeq(big, small);
    container = big;
}

void sortAndMeasureTime(std::vector<int> &vec, std::deque<int> &deq)
{
    printContainer("Before: ", deq);

    clock_t startVec = clock();
    mergeInsertSort(vec);
    clock_t endVec = clock();

    clock_t startDeq = clock();
    mergeInsertSortDeq(deq);
    clock_t endDeq = clock();

    printContainer("After:  ", deq);

    double vecTime = static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC * 1e6;
    double deqTime = static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC * 1e6;

    std::cout << "Time to process a range of " << vec.size()
              << " elements with std::vector: " << vecTime << " us" << std::endl;

    std::cout << "Time to process a range of " << deq.size()
              << " elements with std::deque: " << deqTime << " us" << std::endl;
}
