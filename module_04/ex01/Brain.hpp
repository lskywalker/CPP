#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	private:
		std::string	 ideas[100];

	public:
		Brain();
		~Brain();
		Brain   &operator=(Brain const &var);
		Brain(Brain &copy);

		void	addidea(std::string idea, int id);
};

#endif