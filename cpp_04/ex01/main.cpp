#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
	/*----------------------------------------*/
	// Brain a;
	// a.print();

	// Brain b(a);
	// b.print();

	// Brain c;
	// c = a;
	// c.print();

	// a.setIdea("AAA", 3);
	// a.print();

	// std::cout << a.getIdea(3) << std::endl;
	// std::cout << a.getIdea(55) << std::endl;
	// std::cout << a.getIdea(4) << std::endl;
	/*----------------------------------------*/
	// Dog a;
	// a.setDogIdea("WOW", 0);
	// a.print();

	// Dog b(a);
	// b.print();

	// Dog c;
	// c = a;
	// c.print();
	/*----------------------------------------*/
	// const Animal *j = new Dog();
	// const Animal *i = new Cat();
	// delete j; // should not create a leak
	// delete i;
	/*----------------------------------------*/
	int arr_size = 5;
	Animal *array[arr_size];
	for (int i = 0; i < arr_size; i++)
	{
		if (i < arr_size / 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	for (int i = 0; i < arr_size; i++)
		array[i]->makeSound();
	for (int i = 0; i < arr_size; i++)
		delete array[i];

	return 0;
}
