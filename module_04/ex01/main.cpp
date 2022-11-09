#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Animal	*animals[100];

	for (int i = 0; i < 50; i++) // DOG CREATION
		animals[i] = new Dog();
	for (int i = 50; i < 100; i++) // CAT CREATION
		animals[i] = new Cat();
	for (int i = 0; i < 100; i++) // LET ME HEAR YOU ALL
		animals[i]->makeSound();

	for (int i = 0; i < 100; i++) // DELETION
		delete animals[i];
	
	while(1);
	return (0);
}