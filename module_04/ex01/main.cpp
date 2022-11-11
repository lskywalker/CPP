#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Animal	*animals[100];
	Brain	*dogBrain;

	for (int i = 0; i < 50; i++) // DOG CREATION
		animals[i] = new Dog();
	for (int i = 50; i < 100; i++) // CAT CREATION
		animals[i] = new Cat();
	for (int i = 0; i < 100; i++) // LET ME HEAR YOU ALL
		animals[i]->makeSound();

	for (int i = 0; i < 100; i++) // DELETION
		delete animals[i];

	dogBrain = animals[3]->getBrain();
	dogBrain->addidea("I want to bark", 10);
	animals[3] = animals[5];
	dogBrain = animals[5]->getBrain();

	std::cout << dogBrain[5].ideas[10] << std::endl;
	// Dog	dog(Animal[2]);
	// Cat cat = Animal[7];
	
	while(1);
	return (0);
}