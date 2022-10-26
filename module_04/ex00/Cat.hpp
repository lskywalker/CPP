#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &copy);
		virtual ~Cat();
		std::string		getType() const;
		Cat				&operator=(Cat const &copy);
		void			makeSound() const;
};


#endif