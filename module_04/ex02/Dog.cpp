#include "Dog.hpp"

Dog::Dog()
{
	Brain*	brains = new Brain();
	std::cout << "Dog Spawned!" << std::endl;
	brain = brains;
	type = "Dog";
}

Dog::Dog(Dog const &copy)
{
	Brain*	brains = new Brain(*(copy.brain));
	std::cout << "Dog Copied!" << std::endl;
	brain = brains;
	type = copy.type;
}

std::string		Dog::getType() const
{
	return (type);
}

Dog		&Dog::operator=(Dog const &copy)
{
	for (int i = 0; i < 100; i++)
		brain->ideas[i] = copy.brain->ideas[i];
	type = copy.type;
	std::cout << "Dog Copied!" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "* Woof Woof *" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog Died!" << std::endl;
}
