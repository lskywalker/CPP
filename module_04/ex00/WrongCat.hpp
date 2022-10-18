#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &ref);
		~WrongCat();
		std::string		getType() const;
		WrongCat				&operator=(WrongCat const &ref);
};

#endif