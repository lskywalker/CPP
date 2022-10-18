#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal Spawned!" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal Died!" << std::endl;
}


Animal::Animal(Animal const &ref)
{
	*this = ref;
	std::cout << "Animal Copied!" << std::endl;
}

Animal  &Animal::operator=(Animal const &val)
{
	type = val.type;
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
