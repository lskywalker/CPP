#include "Dog.hpp"

Dog::Dog()
{
	Brain*	brains = new Brain();
	std::cout << "Dog Spawned!" << std::endl;
	brain = brains;
	type = "Dog";
}

Dog::Dog(Dog const &ref)
{
	Brain*	brains = new Brain(*(ref.brain));
	std::cout << "Dog Copied!" << std::endl;
	brain = brains;
	type = ref.type;
}

std::string		Dog::getType() const
{
	return (type);
}

Dog		&Dog::operator=(Dog const &ref)
{
	for (int i = 0; i < 100; i++)
		brain->ideas[i] = ref.brain->ideas[i];
	type = ref.type;
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
