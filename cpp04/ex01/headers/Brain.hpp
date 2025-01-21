#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    std::string ideas[100];
    
public:
    Brain();
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);
    virtual ~Brain();

    void setIdea(const std::string &idea, int index);
    std::string getIdea(int index) const;
};

#endif