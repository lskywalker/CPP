#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Cat *catto = new Cat();
	Dog *doggo = new Dog();
	std::cout << std::endl;
	Cat *catto2 = new Cat(*catto);
	Dog *doggo2 = new Dog(*doggo);

	std::cout << std::endl;
	const Animal *array[4];
	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			array[i] = new Cat();
		else
			array[i] = new Dog();
	}
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete array[i];
	}
	return (0);
}