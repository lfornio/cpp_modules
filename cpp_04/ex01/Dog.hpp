#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define END "\033[0m"

class Dog : public Animal
{
private:
    Brain *dog_ptr;

public:
    Dog(void);
    ~Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
    void makeSound(void) const;
    std::string getDogIdea(int index) const;
    void setDogIdea(std::string idea, int index);
    void print(void) const;
};

#endif