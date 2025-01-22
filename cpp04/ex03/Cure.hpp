#ifndef CURE_HPP
#define CURE_HPP

#include <ICharacter.hpp>
#include <AMateria.hpp>

class Cure : public AMateria
{
public:
    Cure();
    Cure(const Cure &cure);
    Cure operator=(const Cure &copy);
    virtual void use(ICharacter &target);
    Cure(std::string const &type);
    AMateria *clone() const;
    ~Cure();
};

#endif // CURE_HPP