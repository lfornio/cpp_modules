#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	/*-------------------------------------------------------------------*/
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " ";
	j->makeSound();
	std::cout << i->getType() << " ";
	i->makeSound();
	std::cout << meta->getType() << " ";
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	/*-------------------------------------------------------------------*/
	// const WrongAnimal *meta = new WrongAnimal();
	// const WrongAnimal *i = new WrongCat();
	// const WrongCat *j = new WrongCat();
	// std::cout << i->getType() << " ";
	// i->makeSound();
	// std::cout << meta->getType() << " ";
	// meta->makeSound();
	// std::cout << j->getType() << " ";
	// j->makeSound();
	// delete meta;
	// delete i;
	// delete j;
	return 0;
}
