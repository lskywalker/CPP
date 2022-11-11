#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->brain = new Brain();
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	this->brain = new Brain();
	*this = copy;
}

Cat::~Cat()
{
	delete this->brain;
}

std::string		Cat::getType() const
{
	return (this->type);
}

Cat		&Cat::operator=(Cat const &copy)
{
	this->type = copy.type;
	*(this->brain) = *copy.getBrain();
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "* Miauw *" << std::endl;
}

Brain	*Cat::getBrain() const
{
	return(this->brain);
}