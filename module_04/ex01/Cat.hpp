#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &copy);
		virtual ~Cat();
		std::string		getType() const;
		Cat				&operator=(Cat const &copy);
		void			makeSound() const;
		Brain			*brain;
	
	private:
		Brain	*catBrain;
};


#endif