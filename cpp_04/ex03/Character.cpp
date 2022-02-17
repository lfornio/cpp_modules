#include "Character.hpp"

Character::Character(std::string name)
{
    this->name = name;
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
    // std::cout << "Default constructor called Character" << std::endl;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (materia[i] != NULL)
            delete materia[i];
    }
    // std::cout << GREEN << "Destructor called Character" << END << std::endl;
}

Character::Character(const Character &other)
{
    this->name = other.name;
    for (int i = 0, j = 0; i < 4; i++, j++)
    {
        if (other.materia[i] != NULL)
            this->materia[j] = other.materia[i]->clone();
    }
    // std::cout << "Copy constructor called Character" << std::endl;
}

Character &Character::operator=(const Character &other)
{
    this->name = other.name;
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] != NULL)
            delete materia[i];
    }
    for (int i = 0, j = 0; i < 4; i++, j++)
    {
        if (other.materia[i] != NULL)
            this->materia[j] = other.materia[i]->clone();
    }
    // std::cout << "Copy assignment operator called Character" << std::endl;
    return *this;
}

std::string const &Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (materia[i] == NULL)
        {
            materia[i] = m->clone();
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && materia[idx])
        materia[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && materia[idx])
    {
        materia[idx]->use(target);
    }
}