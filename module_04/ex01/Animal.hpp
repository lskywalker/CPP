#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class	Animal
{
	public:
		Animal();
		Animal(Animal const &copy);
		virtual ~Animal();
		Animal	&operator=(Animal const &val);
		virtual void	makeSound() const;
		std::string		getType() const;

	protected:
		std::string		type;
};

#endif