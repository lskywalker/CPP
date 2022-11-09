#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &copy);
		WrongCat				&operator=(WrongCat const &copy);
		virtual ~WrongCat();
		std::string		getType() const;
};

#endif