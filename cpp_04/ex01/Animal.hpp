#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
protected:
    std::string type;

public:
    Animal(void);
    virtual ~Animal();
    Animal(const Animal &other);
    Animal &operator=(const Animal &other);
    std::string getType(void) const;
    virtual void makeSound(void) const;
};

#endif