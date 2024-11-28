#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>


class Zombie {
private:
    std::string name;

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
};

#endif