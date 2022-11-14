#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog has been created!" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(Dog const &copy)
{
	this->brain = new Brain();
	*this = copy;
	std::cout << "Dog has been copied!" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog has been destroyed!" << std::endl;
}

Dog		&Dog::operator=(Dog const &copy)
{
	this->Animal::operator=(copy);
	*(this->brain) = *(copy.getBrain());
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "* Woof Woof *" << std::endl;
}

Brain	*Dog::getBrain() const
{
	return(this->brain);
}