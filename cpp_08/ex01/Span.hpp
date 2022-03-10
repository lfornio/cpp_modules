#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cmath>

class Span
{
private:
	unsigned int _size;
	std::vector<int> _vector;

public:
	Span(const unsigned int N = 0);
	~Span(void);
	Span(const Span &other);
	Span &operator=(const Span &other);
	void addNumber(const int num);
	void addNumber(void);
	unsigned int shortestSpan(void);
	unsigned int longestSpan(void);
	void print(void);
};

#endif
