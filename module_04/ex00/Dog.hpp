#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &copy);
		virtual ~Dog();
		Dog				&operator=(Dog const &copy);
		std::string		getType() const;
		virtual void	makeSound() const;
};

#endif