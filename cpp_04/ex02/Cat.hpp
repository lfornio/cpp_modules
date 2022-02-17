#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define END "\033[0m"

class Cat : public Animal
{
private:
    Brain *cat_ptr;

public:
    Cat(void);
    ~Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
    void makeSound(void) const;
    std::string getCatIdea(int index) const;
    void setCatIdea(std::string idea, int index);
    void print(void) const;
};

#endif