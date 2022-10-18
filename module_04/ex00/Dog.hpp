#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &ref);
		virtual ~Dog();
		std::string		getType() const;
		Dog				&operator=(Dog const &ref);
		void			makeSound() const;
};

#endif