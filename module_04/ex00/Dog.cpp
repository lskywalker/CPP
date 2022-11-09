#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
}

Dog::~Dog()
{
}

std::string		Dog::getType() const
{
	return (this->type);
}

Dog		&Dog::operator=(Dog const &copy)
{
	this->type = copy.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "* Woof Woof *" << std::endl;
}
