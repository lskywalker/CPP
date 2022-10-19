#include "Cat.hpp"

Cat::Cat()
{
	Brain*	brains = new Brain();
	std::cout << "Cat Spawned!" << std::endl;
	brain = brains;
	type = "Cat";
}

Cat::Cat(Cat const &cop)
{
	Brain* brains = new Brain(*(cop.brain));
	std::cout << "Cat Copied!" << std::endl;
	brain = brains;
	type = cop.type;
}

std::string		Cat::getType() const
{
	return (type);
}

Cat		&Cat::operator=(Cat const &cop)
{
	for (int i = 0; i < 100; i++)
		brain->ideas[i] = cop.brain->ideas[i];
	type = cop.type;
	std::cout << "Cat Copied! (Copycat)" << std::endl;
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
