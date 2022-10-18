#include "Cat.hpp"

Cat::Cat()
{
	Brain*	brains = new Brain();
	std::cout << "Cat Spawned!" << std::endl;
	brain = brains;
	type = "Cat";
}

Cat::Cat(Cat const &ref)
{
	Brain* brains = new Brain(*(ref.brain));
	std::cout << "Cat Copied!" << std::endl;
	brain = brains;
	type = ref.type;
}

std::string		Cat::getType() const
{
	return (type);
}

Cat		&Cat::operator=(Cat const &ref)
{
	for (int i = 0; i < 100; i++)
		brain->ideas[i] = ref.brain->ideas[i];
	type = ref.type;
	std::cout << "Cat Copied! (Copycat)" << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "* Miauw *" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat Died!" << std::endl;
}
