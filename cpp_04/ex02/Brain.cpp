#include "Brain.hpp"

Brain::Brain(void)
{
    for (int i = 0; i < SIZE; i++)
        ideas[i] = "Eureka";
    std::cout << "Default constructor called Brain" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Destructor called Brain" << std::endl;
}

Brain::Brain(const Brain &other)
{
    for (int i = 0; i < SIZE; i++)
        this->ideas[i] = other.ideas[i];
    std::cout << "Copy constructor called Brain" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    for (int i = 0; i < SIZE; i++)
        this->ideas[i] = other.ideas[i];
    std::cout << "Copy assignment operator called Brain" << std::endl;
    return *this;
}

void Brain::setIdea(std::string idea, int index)
{
    if (index < 0 || index >= SIZE)
    {
        std::cout << "Index not between 0 and " << SIZE - 1 << std::endl;
        return;
    }
    else
        this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    if (index < 0 || index >= SIZE)
    {
        std::cout << "Index not between 0 and " << SIZE - 1 << " ";
        return "NULL";
    }
    else
        return ideas[index];
}

void Brain::print(void) const
{
    for (int i = 0; i < SIZE; i++)
        std::cout << ideas[i] << " ";
    std::cout << std::endl;
}