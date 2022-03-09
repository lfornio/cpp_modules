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
};

#endif
