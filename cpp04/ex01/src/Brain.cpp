#include "../headers/Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < MAX_IDEAS; i++)
    {
        ideas[i] = "default";
    }
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    for (int i = 0; i < MAX_IDEAS; i++)
    {
        ideas[i] = other.ideas[i];
    }
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < MAX_IDEAS; i++)
        {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(const std::string &idea, int index)
{
    if (index >= 0 && index < MAX_IDEAS)
    {
        ideas[index] = idea;
    }
}

std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < MAX_IDEAS)
    {
        return ideas[index];
    }
    return "invalid index";
}