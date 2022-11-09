#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created!" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	std::cout << "Brain copied!" << std::endl;
	*this = copy;
}

Brain	&Brain::operator=(Brain const &var)
{
	for (int i; i < ideas->size(); i++)
		this->ideas[i] = var.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "A Brain destroyed!" << std::endl;
}