#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->brain = new Brain();
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	this->brain = new Brain();
	*this = copy;
}

Dog::~Dog()
{
	delete this->brain;
}

std::string		Dog::getType() const
{
	return (this->type);
}

Dog		&Dog::operator=(Dog const &copy)
{
	this->type = copy.type;
	*(this->brain) = *copy.getBrain();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "* Woof Woof *" << std::endl;
}

Brain	*Dog::getBrain() const
{
	return(this->brain);
}