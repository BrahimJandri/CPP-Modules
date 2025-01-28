#include "./header/MateriaSource.hpp"
#include "./header/Ice.hpp"
#include "./header/Cure.hpp"
#include "./header/Character.hpp"
#include <iostream>
#include <ostream>

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

// int main()
// {
    // std::cout << std::endl;
    // std::cout << "--------------------- Test: 1 ---------------------" << std::endl;
    // std::cout << std::endl;
    
    // IMateriaSource *src1 = new MateriaSource();
    // AMateria *tmp1;

    // tmp1 = new Ice();
    // src1->learnMateria(tmp1);

    // tmp1 = new Cure();
    // src1->learnMateria(tmp1);

    // tmp1 = new Ice();
    // src1->learnMateria(tmp1);

    // tmp1 = new Cure();
    // src1->learnMateria(tmp1);
    
    // IMateriaSource *dst = new MateriaSource();
    // tmp1 = new Ice();
    // dst->learnMateria(tmp1);

    // tmp1 = new Cure();
    // dst->learnMateria(tmp1);

    // *dst = *src1;
    
    // Character *me1 = new Character("CJ");


    // tmp1 = dst->createMateria("cure");
    // me1->equip(tmp1);

    // tmp1 = dst->createMateria("ice");
    // me1->equip(tmp1);

    // tmp1 = dst->createMateria("cure");
    // me1->equip(tmp1);

    // tmp1 = dst->createMateria("ice");
    // me1->equip(tmp1);

    // me1->use(0, *me1);
    // me1->use(2, *me1);
    // me1->use(1, *me1);
    // me1->use(3, *me1);
    // Character *tar = new Character(*me1);
    
    // tar->use(0, *me1);
    // tar->use(2, *me1);
    // tar->use(1, *me1);
    // tar->unequip(3);
    // tar->use(3, *me1);

    // delete dst;
    // delete src1;
    // delete me1;
    // delete tar;
    
//     std::cout << std::endl;
//     std::cout << "--------------------- Test: 2 ---------------------" << std::endl;
//     std::cout << std::endl;
    
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());

//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);

//     delete tmp;

//     tmp = src->createMateria("cure");
//     me->equip(tmp);


//     src->learnMateria(new Cure());
//     src->learnMateria(new Cure());
//     src->learnMateria(new Cure());
//     src->learnMateria(new Cure());
//     src->learnMateria(new Cure());
//     src->learnMateria(new Cure());
//     src->learnMateria(new Cure());

//     tmp = src->createMateria("cure");
//     me->equip(tmp);
    
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);

//     me->unequip(0);
//     me->unequip(0);

//     delete bob;
//     delete me;
//     delete src;

//     return 0;
// }



