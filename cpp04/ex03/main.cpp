#include "./header/MateriaSource.hpp"
#include "./header/Ice.hpp"
#include "./header/Cure.hpp"
#include "./header/Character.hpp"



int main()
{
    std::cout << "===========TEST: 1===========" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;  
    delete src;
    std::cout << "===========TEST: 2===========" << std::endl;
    IMateriaSource* src1 = new MateriaSource();
    src1->learnMateria(new Ice());
    src1->learnMateria(new Cure());
    src1->learnMateria(new Ice());
    src1->learnMateria(new Cure());
    src1->learnMateria(new Ice());
    src1->learnMateria(new Cure());
    src1->learnMateria(new Ice());
    src1->learnMateria(new Cure());
    ICharacter* me1 = new Character("me");
    AMateria* tmp1;
    tmp1 = src1->createMateria("ice");
    me1->equip(tmp1);
    tmp1 = src1->createMateria("cure");
    me1->equip(tmp1);
    tmp1 = src1->createMateria("ice");
    me1->equip(tmp1);
    tmp1 = src1->createMateria("cure");
    me1->equip(tmp1);
    tmp1 = src1->createMateria("ice");
    me1->equip(tmp1);
    tmp1 = src1->createMateria("cure");
    me1->equip(tmp1);
    tmp1 = src1->createMateria("ice");
    me1->equip(tmp1);
    tmp1 = src1->createMateria("cure");
    me1->equip(tmp1);
    ICharacter* bob1 = new Character("bob");
    me1->use(0, *bob1);
    me1->use(1, *bob1);
    me1->use(2, *bob1);
    me1->use(3, *bob1);
    delete bob1;
    delete me1;
    delete src1;
    std::cout << "===========TEST: 3===========" << std::endl;
    IMateriaSource* src2 = new MateriaSource();
    src2->learnMateria(new Ice());
    src2->learnMateria(new Cure());
    ICharacter* me2 = new Character("me");
    AMateria* tmp2;
    tmp2 = src2->createMateria("ice");
    me2->equip(tmp2);
    tmp2 = src2->createMateria("cure");
    me2->equip(tmp2);
    ICharacter* bob2 = new Character("bob");
    me2->unequip(0);
    me2->use(0, *bob2);
    me2->use(1, *bob2);
    me2->use(2, *bob2);
    me2->use(3, *bob2);
    delete bob2;
    delete me2;
    delete src2;
    std::cout << "===========TEST: 4===========" << std::endl;
    IMateriaSource* src3 = new MateriaSource();
    src3->learnMateria(new Ice());
    src3->learnMateria(new Cure());
    ICharacter* me3 = new Character("me");
    AMateria* tmp3;
    tmp3 = src3->createMateria("ice");
    me3->equip(tmp3);
    tmp3 = src3->createMateria("cure");
    me3->equip(tmp3);
    tmp3 = src3->createMateria("ice create");
    me3->equip(tmp3);

    ICharacter* bob3 = new Character("bob");
    me3->use(0, *bob3);
    me3->use(1, *bob3);
    me3->use(2, *bob3);
    delete bob3;
    delete me3;
    delete src3;

    return 0;

}



