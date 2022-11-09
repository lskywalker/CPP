#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>

class	Animal
{
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal(Animal const &copy);
		Animal	&operator=(Animal const &val);
		virtual void	makeSound() const;
		std::string		getType() const;

	protected:
		std::string		type;
};

#endif