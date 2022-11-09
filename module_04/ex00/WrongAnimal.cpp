#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << type << " Spawned!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type_) : type(type_)
{
    std::cout << type << " Spawned!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
    this->type = copy.type;
    std::cout << this->type << " Spawned!" << std::endl;
}

WrongAnimal     &WrongAnimal::operator=(WrongAnimal const &val)
{
    this->type = val.type;
    return (*this);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "* Wrong Animal Sounds *" << std::endl;
}

std::string		WrongAnimal::getType() const
{
	return (this->type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << this->type <<" Died!" << std::endl;
}