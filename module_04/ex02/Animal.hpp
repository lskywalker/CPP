#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"


class	Animal
{
	public:
		Animal();
		Animal(std::string);
		virtual ~Animal();
		Animal	&operator=(Animal const &val);
		Animal(Animal const &copy);
		virtual void	makeSound() const = 0;
		virtual std::string		getType() const = 0;
		virtual Brain	*getBrain() const = 0;

	protected:
		std::string		type;
};

#endif