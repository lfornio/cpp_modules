#include "Span.hpp"

<<<<<<< HEAD
Span::Span(const unsigned int N) : _size(N)
{
}

Span::~Span(void)
{
	_vector.clear();
}

Span::Span(const Span &other)
	: _size(other._size), _vector(other._vector)
{
=======
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
>>>>>>> ba2fdf64f556b46008f8215c40dfd939da44ca57
}

Span &Span::operator=(const Span &other)
{
<<<<<<< HEAD
	if(this == &other)
		return *this;
	this->_size = other._size;
	this->_vector = other._vector;
	return *this;
=======
    this->_size = other._size;
    this->_vector = other._vector;
    return *this;
>>>>>>> ba2fdf64f556b46008f8215c40dfd939da44ca57
}

void Span::print(void)
{
<<<<<<< HEAD
	for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
=======
    for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
>>>>>>> ba2fdf64f556b46008f8215c40dfd939da44ca57
}

void Span::addNumber(const int num)
{
<<<<<<< HEAD
	if (_vector.size() < _size)
		_vector.push_back(num);
	else
		throw std::invalid_argument("The container is full");
=======
    if (_vector.size() < _size)
        _vector.push_back(num);
    else
        throw std::invalid_argument("The container is full");
>>>>>>> ba2fdf64f556b46008f8215c40dfd939da44ca57
}

void Span::addNumber(void)
{
<<<<<<< HEAD
	_vector.resize(_size);
	int i = 1;
	for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++)
	{
		*it = pow(i++, 2);
	}
=======
    _vector.resize(_size);
    int i = 1;
    for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++)
    {
        *it = pow(i++, 2);
    }
>>>>>>> ba2fdf64f556b46008f8215c40dfd939da44ca57
}

unsigned int Span::shortestSpan(void)
{
<<<<<<< HEAD
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
=======
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
>>>>>>> ba2fdf64f556b46008f8215c40dfd939da44ca57
}

unsigned int Span::longestSpan(void)
{
<<<<<<< HEAD
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
=======
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
>>>>>>> ba2fdf64f556b46008f8215c40dfd939da44ca57
