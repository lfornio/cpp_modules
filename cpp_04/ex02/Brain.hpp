#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>
#define SIZE 100

class Brain
{
private:
	std::string ideas[SIZE];

public:
	Brain(void);
	~Brain(void);
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);
	void setIdea(std::string idea, int index);
	std::string getIdea(int index) const;
	void print(void) const;
};

#endif
