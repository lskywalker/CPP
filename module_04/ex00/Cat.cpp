#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Spawned!" << std::endl;
	type = "Cat";
}

Cat::Cat(Cat const &copy)
{
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
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "* Miauw *" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Died!" << std::endl;
}
