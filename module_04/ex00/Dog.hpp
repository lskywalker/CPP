#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &cop);
		virtual ~Dog();
		std::string		getType() const;
		Dog				&operator=(Dog const &cop);
		void			makeSound() const;
};

#endif