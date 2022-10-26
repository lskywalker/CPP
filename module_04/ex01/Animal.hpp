#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>

class	Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal	&operator=(Animal const &val);
		Animal(Animal const &copy);
		virtual void	makeSound() const;
		std::string		getType() const;

	protected:
		std::string		type;
};

#endif