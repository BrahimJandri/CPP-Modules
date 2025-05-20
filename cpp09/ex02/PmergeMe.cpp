#include "PmergeMe.hpp"

// Constructor
PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

bool PmergeMe::isNumber(const std::string &str)
{
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
    {
        if (!std::isdigit(*it))
            return false;
    }
    return !str.empty();
}

void PmergeMe::parseInput(int argc, char **argv, std::vector<int> &vec, std::deque<int> &deq)
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

void PmergeMe::printContainer(const std::string &prefix, const std::vector<int> &container)
{
    std::cout << prefix;
    for (std::vector<int>::const_iterator it = container.begin(); it != container.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void PmergeMe::printContainer(const std::string &prefix, const std::deque<int> &container)
{
    std::cout << prefix;
    for (std::deque<int>::const_iterator it = container.begin(); it != container.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void PmergeMe::mergeInsertSort(std::vector<int> &container, int left, int right)
{
    if (left >= right)
        return;

    int mid = (left + right) / 2;
    mergeInsertSort(container, left, mid);
    mergeInsertSort(container, mid + 1, right);

    std::vector<int> temp;
    int i = left, j = mid + 1;

    while (i <= mid && j <= right)
    {
        if (container[i] < container[j])
            temp.push_back(container[i++]);
        else
            temp.push_back(container[j++]);
    }

    while (i <= mid)
        temp.push_back(container[i++]);
    while (j <= right)
        temp.push_back(container[j++]);

    for (int k = left; k <= right; ++k)
        container[k] = temp[k - left];
}

void PmergeMe::mergeInsertSort(std::deque<int> &container, int left, int right)
{
    if (left >= right)
        return;

    int mid = (left + right) / 2;
    mergeInsertSort(container, left, mid);
    mergeInsertSort(container, mid + 1, right);

    std::deque<int> temp;
    int i = left, j = mid + 1;

    while (i <= mid && j <= right)
    {
        if (container[i] < container[j])
            temp.push_back(container[i++]);
        else
            temp.push_back(container[j++]);
    }

    while (i <= mid)
        temp.push_back(container[i++]);
    while (j <= right)
        temp.push_back(container[j++]);

    for (int k = left; k <= right; ++k)
        container[k] = temp[k - left];
}

void PmergeMe::sortAndMeasure(std::vector<int> &vec, std::deque<int> &deq)
{
    printContainer("Before: ", vec);

    // Sort with vector
    clock_t startVec = clock();
    mergeInsertSort(vec, 0, vec.size() - 1);
    clock_t endVec = clock();

    // Sort with deque
    clock_t startDeq = clock();
    mergeInsertSort(deq, 0, deq.size() - 1);
    clock_t endDeq = clock();

    printContainer("After:  ", vec);

    double vecTime = static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC * 1e6;
    double deqTime = static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC * 1e6;

    std::cout << "Time to process a range of " << vec.size()
              << " elements with std::vector: " << vecTime << " us" << std::endl;

    std::cout << "Time to process a range of " << deq.size()
              << " elements with std::deque: " << deqTime << " us" << std::endl;
}
