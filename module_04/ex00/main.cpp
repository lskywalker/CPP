#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const WrongAnimal* a = new WrongAnimal();
	const WrongAnimal* b = new WrongCat();
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	a->makeSound();
	b->makeSound();
	delete i;
	delete j;
	delete meta;
	delete a;
	delete b;
    return 0;
}