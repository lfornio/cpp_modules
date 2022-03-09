#include "Span.hpp"

Span::Span(const unsigned int N)
{
    _size = N;
}

Span::~Span()
{
    _vector.clear();
}

Span::Span(const Span &other)
{
    this->_size = other._size;
    this->_vector = other._vector;
}

Span &Span::operator=(const Span &other)
{
    this->_size = other._size;
    this->_vector = other._vector;
    return *this;
}

void Span::print(void)
{
    for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void Span::addNumber(const int num)
{
    if (_vector.size() < _size)
        _vector.push_back(num);
    else
        throw std::invalid_argument("The container is full");
}

void Span::addNumber(void)
{
    _vector.resize(_size);
    int i = 1;
    for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++)
    {
        *it = pow(i++, 2);
    }
}

unsigned int Span::shortestSpan(void)
{
    if (_vector.empty() || _vector.size() == 1)
        throw std::invalid_argument("The container is very small");
    std::vector<int>::iterator it = _vector.begin();
    unsigned int res = abs(*(it) - *(it + 1));
    unsigned int tmp;
    while (it != _vector.end() - 1)
    {
        tmp = abs(*(it) - *(it + 1));
        if (tmp < res)
            res = tmp;
        it++;
    }
    return res;
}

unsigned int Span::longestSpan(void)
{
    if (_vector.empty() || _vector.size() == 1)
        throw std::invalid_argument("The container is very small");
    std::vector<int>::iterator it = _vector.begin();
    unsigned int res = abs(*(it) - *(it + 1));
    unsigned int tmp;
    while (it != _vector.end() - 1)
    {
        tmp = abs(*(it) - *(it + 1));
        if (tmp > res)
            res = tmp;
        it++;
    }
    return res;
}