#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &ref);
		virtual ~Cat();
		std::string		getType() const;
		Cat				&operator=(Cat const &ref);
		void			makeSound() const;
};


#endif