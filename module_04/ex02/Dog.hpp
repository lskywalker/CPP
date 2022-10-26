#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &copy);
		virtual ~Dog();
		std::string		getType() const;
		Dog				&operator=(Dog const &copy);
		void			makeSound() const;

	private:
		Brain	*brain;
};

#endif