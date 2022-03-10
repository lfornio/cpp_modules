#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		source[i] = NULL;
	// std::cout << "Default constructor called MateriaSource" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (source[i] != NULL)
			delete source[i];
	}
	// std::cout << GREEN << "Destructor called MateriaSource" << END << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0, j = 0; i < 4; i++, j++)
	{
		if (other.source[i] != NULL)
			this->source[j] = other.source[i]->clone();
	}
	// std::cout << "Copy constructor called MateriaSource" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->source[i] != NULL)
			delete source[i];
	}
	for (int i = 0, j = 0; i < 4; i++, j++)
	{
		if (other.source[i] != NULL)
			this->source[j] = other.source[i]->clone();
	}
	// std::cout << "Copy assignment operator called MateriaSource" << std::endl;
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (source[i] == NULL)
		{
			source[i] = m;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (source[i] && source[i]->getType().compare(type) == 0)
			return source[i];
	}
	return NULL;
}
