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
		Brain(Brain const &copy);
};

#endif