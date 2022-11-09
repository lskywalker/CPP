#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &copy);
		virtual ~Dog();
		std::string		getType() const;
		Dog				&operator=(Dog const &copy);
		virtual void	makeSound() const;
		virtual Brain	*getBrain() const;

	private:
		Brain	*brain;
};

#endif