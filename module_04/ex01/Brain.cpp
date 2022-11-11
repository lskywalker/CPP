#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created!" << std::endl;
}

Brain::Brain(Brain &copy)
{
	std::cout << "Brain copied!" << std::endl;
	*this = copy;
}

Brain	&Brain::operator=(Brain const &var)
{
	for (size_t i = 0; i < ideas->size(); i++)
		this->ideas[i] = var.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "A Brain destroyed!" << std::endl;
}

void	Brain::addidea(std::string idea, int id)
{
	this->ideas[id] = idea;
}
