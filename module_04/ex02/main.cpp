#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define N_ANIMALS 10

int main() {
	std::cout << "==================   BASIC TEST   ==================\n" << std::endl;

	Dog *dog = new Dog();
	Cat *cat = new Cat();

	std::cout << std::endl;

	std::cout << "Type: " << dog->getType() << std::endl;
	std::cout << "Type: " << cat->getType() << std::endl;

	std::cout << std::endl;

	dog->makeSound();
	cat->makeSound();

	std::cout << std::endl;

	// TEST DEEP COPY
	std::cout << "================== TEST DEEP COPY ==================\n" << std::endl;

	cat->getBrain()->ideas[0] = "I think I'm hungry!";
	cat->getBrain()->ideas[1] = "The sun is far away";

	std::cout << "Cat ideas:" << std::endl;
	for (int i = 0; i < 2; i++) std::cout << "Idea: " << cat->getBrain()->ideas[i] << std::endl;
	std::cout << std::endl;

	std::cout << "Create cat2" << std::endl;
	Cat *cat2 = new Cat();
	std::cout << std::endl;

	std::cout << "Cat2 ideas (should be empty)" << std::endl;
	for (int i = 0; i < 2; i++) std::cout << "Idea: " << cat2->getBrain()->ideas[i] << std::endl;
	std::cout << std::endl;

	std::cout << "Cat2 = Cat" << std::endl;
	*cat2 = *cat;
	std::cout << std::endl;

	std::cout << "Cat ideas:" << std::endl;
	for (int i = 0; i < 2; i++) std::cout << "Idea: " << cat->getBrain()->ideas[i] << std::endl;
	std::cout << std::endl;

	std::cout << "Cat2 ideas" << std::endl;
	for (int i = 0; i < 2; i++) std::cout << "Idea: " << cat2->getBrain()->ideas[i] << std::endl;
	std::cout << std::endl;

	std::cout << "Cat ideas (now he is full)" << std::endl;
	cat->getBrain()->ideas[0] = "I am not hungry anymore!";
	for (int i = 0; i < 2; i++) std::cout << "Idea: " << cat->getBrain()->ideas[i] << std::endl;
	std::cout << std::endl;

	std::cout << "Cat2 ideas" << std::endl;
	for (int i = 0; i < 2; i++) std::cout << "Idea: " << cat2->getBrain()->ideas[i] << std::endl;
	std::cout << std::endl;

	std::cout << "==================   CLEAN ALL    ==================\n" << std::endl;

	delete dog;
	delete cat;
	delete cat2;

	std::cout << std::endl;

	std::cout << "================ SUBJECT ARRAY TEST ================\n" << std::endl;

	Animal *animals[N_ANIMALS];

	for (int i = 0; i < N_ANIMALS; i++)
	{
		if (i < N_ANIMALS / 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	std::cout << std::endl;

	for (int i = 0; i < N_ANIMALS; i++) {
		animals[i]->makeSound();
	}

	std::cout << std::endl;

	for (int i = 0; i < N_ANIMALS; i++) {
		delete animals[i];
	}
}
