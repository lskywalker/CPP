#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "A Brain appeared!" << std::endl;
}

Brain::Brain(Brain const &cop)
{
	*this = cop;
}

Brain	&Brain::operator=(Brain const &var)
{
	std::cout << "Brain Copied!" << std::endl;
	for (int i; i < 100; i++)
		ideas[i] = var.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "A Brain disappeared!" << std::endl;
}