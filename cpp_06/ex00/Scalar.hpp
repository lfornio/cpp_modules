#ifndef SCALAR_HPP
#define SCALAR_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>
#include <float.h>
#include <cmath>
#include <exception>

#define YELLOW "\033[33m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define END "\033[0m"

class Scalar
{
private:
	std::string	str;
	std::string	type;
	int			flag;

	char		ch;
	int			num;
	float		f;
	double		d;

public:
	Scalar(void);
	Scalar(std::string argument);
	~Scalar(void);
	Scalar(const Scalar &other);
	Scalar &operator=(const Scalar &other);

	void setFlag(void);
	void foundType(void);
	void Conversion(void);
	void printInfoConversion(void);
	void printChar(void);
	void printInt(void);
	void printFloat(void);
	void printDouble(void);

	class UndefinedBehavior : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

#endif
