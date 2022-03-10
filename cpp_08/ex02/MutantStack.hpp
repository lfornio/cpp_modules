#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP
#include <iostream>
#include <exception>
#include <iterator>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{

public:
<<<<<<< HEAD
	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack() {};
	~MutantStack() {};
	MutantStack(const MutantStack<T> &other) : std::stack<T>(other){};
	MutantStack const &operator=(const MutantStack<T> &other)
	{
		if (this == &other)
			return (*this);
		std::stack<T>::operator=(other);
		return (*this);
	};
	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}
=======
    typedef typename std::stack<T>::container_type::iterator iterator;
    MutantStack(){};
    ~MutantStack(){};
    iterator begin()
    {
        return this->c.begin();
    }
    iterator end()
    {
        return this->c.end();
    }
>>>>>>> ba2fdf64f556b46008f8215c40dfd939da44ca57
};

#endif
