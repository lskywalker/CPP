#include "Cat.hpp"

Cat::Cat()
{
	Brain*	brain = new Brain();
	std::cout << "Cat Spawned!" << std::endl;
	catBrain = brain;
	type = "Cat";
}

Cat::Cat(Cat const &copy)
{
	Brain* brain = new Brain(*(copy.catBrain));
	std::cout << "Cat Copied!" << std::endl;
	catBrain = brain;
	type = copy.type;
}

std::string		Cat::getType() const
{
	return (type);
}

Cat		&Cat::operator=(Cat const &copy)
{
	type = copy.type;
	std::cout << "Cat Copied! (Copycat)" << std::endl;
	if (brain)
		delete brain;
	brain = new Brain(*copy.brain);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "* Miauw *" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat Died!" << std::endl;
}

Brain*	Cat::brain()
{
	return (catBrain);
}