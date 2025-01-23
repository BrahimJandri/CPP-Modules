#include "../header/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; ++i)
    {
        learned[i] = NULL;
    }
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i)
    {
        delete learned[i];
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (!m)
        return;

    for (int i = 0; i < 4; ++i)
    {
        if (learned[i] == NULL)
        {
            learned[i] = m;
            break;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; ++i)
    {
        if (learned[i] && learned[i]->getType() == type)
        {
            return learned[i]->clone();
        }
    }
    return NULL;
}