#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Spawned!" << std::endl;
	type = "Dog";
}

Dog::Dog(Dog const &ref)
{
	type = ref.type;
}

std::string		Dog::getType() const
{
	return (type);
}

Dog		&Dog::operator=(Dog const &ref)
{
	type = ref.type;
	std::cout << "Dog Copied!" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "* Woof Woof *" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Died!" << std::endl;
}
