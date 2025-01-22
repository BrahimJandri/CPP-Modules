#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

#define MAX_IDEAS 100

class Brain
{
private:
    std::string ideas[MAX_IDEAS];
    
public:
    Brain();
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);
    virtual ~Brain();

    void setIdea(const std::string &idea, int index);
    std::string getIdea(int index) const;
};

#endif