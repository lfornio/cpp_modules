#include "Span.hpp"

int main()
{
	try
	{
		Span a = Span(5);
		a.addNumber(6);
		a.addNumber(3);
		a.addNumber(17);
		a.addNumber(9);
		a.addNumber(11);
		a.print();
		std::cout << a.shortestSpan() << std::endl;
		std::cout << a.longestSpan() << std::endl;

		// Span a(2);
		// a.print();
		// a.addNumber(1);
		// a.print();
		// a.addNumber(2);
		// a.print();
		// a.addNumber(3);
		// a.print();

		// Span a = Span(5);
		// a.addNumber(6);
		// std::cout << a.shortestSpan() << std::endl;
		// std::cout << a.longestSpan() << std::endl;


		// Span a(20000);
		// a.addNumber();
		// a.print();

		// Span b(a);
		// b.print();

		// Span b(2);
		// b.print();
		// b.addNumber(1);
		// b.addNumber(4);
		// b = a;
		// b.print();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
