#include "Cat.hpp"

Cat::Cat()
{
	Brain*	brains = new Brain();
	std::cout << "Cat Spawned!" << std::endl;
	brain = brains;
	type = "Cat";
}

Cat::Cat(Cat const &copy)
{
	Brain* brains = new Brain(*(copy.brain));
	std::cout << "Cat Copied!" << std::endl;
	brain = brains;
	type = copy.type;
}

std::string		Cat::getType() const
{
	return (type);
}

Cat		&Cat::operator=(Cat const &copy)
{
	for (int i = 0; i < 100; i++)
		brain->ideas[i] = copy.brain->ideas[i];
	type = copy.type;
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
