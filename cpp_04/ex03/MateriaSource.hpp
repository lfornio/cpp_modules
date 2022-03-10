#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "Character.hpp"
#include "IMateriaSource.hpp"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define END "\033[0m"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *source[4];

public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource &operator=(const MateriaSource &other);
	void learnMateria(AMateria *m);
	AMateria *createMateria(std::string const &type);
};

#endif
