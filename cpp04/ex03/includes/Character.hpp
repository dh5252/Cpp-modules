

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *materia[4];
    
    public:
        Character();
        Character(std::string const &_name);
        ~Character();

        Character(const Character &obj);
        Character &operator=(const Character &obj);

        std::string const &getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
};


#endif