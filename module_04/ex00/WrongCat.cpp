#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy)
{
}

WrongCat::~WrongCat()
{
}

WrongCat    &WrongCat::operator=(WrongCat const &copy)
{
    type = copy.type;
    return (*this);
}

std::string     WrongCat::getType() const
{
    return (type);
}
