#ifndef ICE_HPP
#define ICE_HPP

#include <ICharacter.hpp>
#include <AMateria.hpp>

class Ice : public AMateria
{
public:
    Ice();
    Ice(const Ice &ice);
    Ice operator=(const Ice &copy);
    void use(ICharacter &target);
    Ice(std::string const &type);
    AMateria *clone() const;
    ~Ice();
};

#endif // ICE_HPP