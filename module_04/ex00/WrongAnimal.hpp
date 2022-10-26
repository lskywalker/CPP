#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal	&operator=(WrongAnimal const &val);
		WrongAnimal(WrongAnimal const &copy);
		virtual void	makeSound() const;
		std::string		getType() const;

	protected:
		std::string		type;
};

#endif