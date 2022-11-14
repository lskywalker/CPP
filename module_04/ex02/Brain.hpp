#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	private:
		static const int	numberOfIdeas = 100;

	public:
		Brain();
		~Brain();
		Brain   &operator=(Brain const &var);
		Brain(Brain &copy);

		std::string		ideas[Brain::numberOfIdeas];
};

#endif