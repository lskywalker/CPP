#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal created!" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal Died!" << std::endl;
}


Animal::Animal(Animal const &copy)
{
	*this = copy;
	std::cout << "Animal Copied!" << std::endl;
}

Animal  &Animal::operator=(Animal const &val)
{
	this->type = val.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "* Animal Sounds *" << std::endl;
}

std::string		Animal::getType() const
{
	return (this->type);
}
