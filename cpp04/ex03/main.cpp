#include "./header/MateriaSource.hpp"
#include "./header/Ice.hpp"
#include "./header/Cure.hpp"
#include "./header/Character.hpp"

int main()
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter *me = new Character("me");

    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter *bob = new Character("bob");
    ICharacter *bihi = new Character("bihi");

    me->use(0, *bob);
    me->use(1, *bob);
    me->use(0, *bihi);
    me->use(1, *bihi);

    delete bob;
    delete bihi;
    delete me;
    delete src;

    return 0;
}