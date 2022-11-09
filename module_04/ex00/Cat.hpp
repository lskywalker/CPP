#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &copy);
		virtual ~Cat();
		Cat				&operator=(Cat const &copy);
		std::string		getType() const;
		virtual void	makeSound() const;
};


#endif