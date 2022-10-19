#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Cat *cat = new Cat();
	Dog *dog = new Dog();
	Cat *cat2 = new Cat(*cat);
	Dog *dog2 = new Dog(*dog);

	const Animal *array[4];
	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			array[i] = new Cat();
		else
			array[i] = new Dog();
	}
	for (int i = 0; i < 4; i++)
		delete array[i];
	return (0);
}