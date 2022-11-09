#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    public:
		WrongAnimal();
		WrongAnimal(std::string type);
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal const &copy);
		WrongAnimal	&operator=(WrongAnimal const &val);
		virtual void	makeSound() const;
		std::string		getType() const;

	protected:
		std::string		type;
};

#endif