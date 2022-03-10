#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	AMateria *materia[4];

public:
	Character(void);
	Character(std::string name);
	~Character(void);
	Character(const Character &other);
	Character &operator=(const Character &other);
	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif
