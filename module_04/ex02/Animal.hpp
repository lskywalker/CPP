#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"


class	Animal
{
	public:
		virtual ~Animal();
		Animal	&operator=(Animal const &val);
		virtual void	makeSound() const = 0;
		std::string		getType() const;

	protected:
		Animal();
		Animal(Animal const &copy);
		
		std::string		type;
};

#endif