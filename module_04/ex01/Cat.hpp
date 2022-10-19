#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &cop);
		virtual ~Cat();
		std::string		getType() const;
		Cat				&operator=(Cat const &cop);
		void			makeSound() const;
	
	private:
		Brain	*brain;
};


#endif