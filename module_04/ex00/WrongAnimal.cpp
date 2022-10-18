#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Spawned!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &ref)
{
    *this = ref;
    std::cout << "WrongAnimal Copied!" << std::endl;
}

WrongAnimal     &WrongAnimal::operator=(WrongAnimal const &val)
{
    type = val.type;
    return (*this);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "* Wrong Animal Sounds *" << std::endl;
}

std::string		WrongAnimal::getType() const
{
	return (type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Died!" << std::endl;
}