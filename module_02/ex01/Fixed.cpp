#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(int num)
{
	std::cout << "Int constructor called" << std::endl;
	value = num << bitCount;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(num * (1 << Fixed::bitCount));
}

Fixed::Fixed(Fixed const &ref)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref; 
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &ref)
{
	std::cout << "Assignation operator called" << std::endl;
	value = ref.value;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "Default constructor called" << std::endl;
	value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->value / (float)(1 << bitCount)));
}

int		Fixed::toInt(void) const
{
	return (this->value >> bitCount);
}

std::ostream& operator<<(std::ostream &output, Fixed const &value)
{
	output << value.toFloat();
	return (output);
}