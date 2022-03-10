#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << RED << "Default constructor called Cat" << END << std::endl;
	type = "Cat";
	cat_ptr = new Brain();
}

Cat::~Cat(void)
{
	delete cat_ptr;
	std::cout << GREEN << "Destructor called Cat" << END << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << RED << "Copy constructor called Cat" << END << std::endl;
	this->cat_ptr = new Brain();
	for (int i = 0; i < SIZE; i++)
		this->cat_ptr->setIdea(other.cat_ptr->getIdea(i), i);
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Copy assignment operator called Cat" << std::endl;
	this->type = other.type;
	for (int i = 0; i < SIZE; i++)
		this->cat_ptr->setIdea(other.cat_ptr->getIdea(i), i);
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow-Meow" << std::endl;
}

std::string Cat::getCatIdea(int index) const
{
	if (index < 0 || index >= SIZE)
	{
		std::cout << "Index not between 0 and " << SIZE - 1 << " ";
		return "NULL";
	}
	else
		return cat_ptr->getIdea(index);
}

void Cat::setCatIdea(std::string idea, int index)
{
	if (index < 0 || index >= SIZE)
	{
		std::cout << "Index not between 0 and " << SIZE - 1 << std::endl;
		return;
	}
	else
		cat_ptr->setIdea(idea, index);
}

void Cat::print(void) const
{
	std::cout << this->getType() << " ";
	this->makeSound();
	for (int i = 0; i < SIZE; i++)
		std::cout << this->getCatIdea(i) << " ";
	std::cout << std::endl;
}
