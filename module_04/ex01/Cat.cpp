#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat has been created!" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(Cat const &copy)
{
	this->brain = new Brain();
	*this = copy;
	std::cout << "Cat has been copied!" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat has been destroyed!" << std::endl;
}

Cat		&Cat::operator=(Cat const &copy)
{
	this->Animal::operator=(copy);
	*(this->brain) = *(copy.getBrain());
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "* Miauw *" << std::endl;
}

Brain	*Cat::getBrain() const
{
	return(this->brain);
}