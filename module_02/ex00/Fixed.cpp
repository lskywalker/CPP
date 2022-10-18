#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed	&Fixed::operator=(Fixed const &ref)
{
	std::cout << "Assignation operator called" << std::endl;
	value = ref.value;
	return (*this);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int    Fixed::getRawBits(void )const
{
    std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void    Fixed::setRawBits(int const raw)
{
	value = raw;
}
