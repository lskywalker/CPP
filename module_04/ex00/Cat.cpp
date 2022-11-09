#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
}

Cat::~Cat()
{
}

std::string		Cat::getType() const
{
	return (this->type);
}

Cat		&Cat::operator=(Cat const &copy)
{
	this->type = copy.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "* Miauw *" << std::endl;
}

