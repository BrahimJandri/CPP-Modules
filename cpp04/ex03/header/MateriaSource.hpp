#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>
#include <ostream>

class MateriaSource : public IMateriaSource
{
private:
    AMateria *learned[4];

public:
    MateriaSource();
    ~MateriaSource();
    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);
};

#endif