#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Spawned!" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &cop)
{
    type = cop.type;
}

WrongCat    &WrongCat::operator=(WrongCat const &cop)
{
    type = cop.type;
    std::cout << "WrongCat Copied!" << std::endl;
    return (*this);
}

std::string     WrongCat::getType() const
{
    return (type);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Died!" << std::endl;
}