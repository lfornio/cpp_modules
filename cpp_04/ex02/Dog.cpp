#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << RED << "Default constructor called Dog" << END << std::endl;
	type = "Dog";
	dog_ptr = new Brain();
}

Dog::~Dog(void)
{
	delete dog_ptr;
	std::cout << GREEN << "Destructor called Dog" << END << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << RED << "Copy constructor called Dog" << END << std::endl;
	this->dog_ptr = new Brain();
	for (int i = 0; i < SIZE; i++)
		this->dog_ptr->setIdea(other.dog_ptr->getIdea(i), i);
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Copy assignment operator called Dog" << std::endl;
	this->type = other.type;
	for (int i = 0; i < SIZE; i++)
		this->dog_ptr->setIdea(other.dog_ptr->getIdea(i), i);
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof-Woof" << std::endl;
}

std::string Dog::getDogIdea(int index) const
{
	if (index < 0 || index >= SIZE)
	{
		std::cout << "Index not between 0 and " << SIZE - 1 << " ";
		return "NULL";
	}
	else
		return dog_ptr->getIdea(index);
}

void Dog::setDogIdea(std::string idea, int index)
{
	if (index < 0 || index >= SIZE)
	{
		std::cout << "Index not between 0 and " << SIZE - 1 << std::endl;
		return;
	}
	else
		dog_ptr->setIdea(idea, index);
}

void Dog::print(void) const
{
	std::cout << this->getType() << " ";
	this->makeSound();
	for (int i = 0; i < SIZE; i++)
		std::cout << this->getDogIdea(i) << " ";
	std::cout << std::endl;
}
