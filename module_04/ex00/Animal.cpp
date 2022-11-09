#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << this->type << " Spawned!" << std::endl;
}

Animal::Animal(std::string type_) : type(type_)
{
	std::cout << this->type << " Spawned!" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << this->type << " Died!" << std::endl;
}


Animal::Animal(Animal const &copy)
{
	this->type = copy.type;
	std::cout << this->type << " Spawned!" << std::endl;
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
	return (type);
}
