#include "Fixed.hpp"

std::ostream &operator<<(std::ostream &output, Fixed const &value)
{
	output << value.toFloat();
	return (output);
}

Fixed::Fixed(void)
{
	value = 0;
}

Fixed::Fixed(int num)
{
	value = num << bitCount;
}

Fixed::Fixed(const float num)
{
	value = roundf(num *(1 << Fixed::bitCount));
}

Fixed::Fixed(Fixed const &fixed)
{
	*this = fixed;
}

Fixed::~Fixed(void)
{
}

int Fixed::getRawBits(void) const
{
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
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

Fixed &Fixed::operator=(const Fixed &ref)
{
	value = ref.getRawBits();
	return (*this);
}

bool Fixed::operator<(const Fixed &ref)
{
	return ((getRawBits() < ref.getRawBits()) ? true : false);
}

bool Fixed::operator>(const Fixed &ref)
{
	return ((getRawBits() > ref.getRawBits()) ? true : false);
}

bool Fixed::operator<=(const Fixed &ref)
{
	return ((getRawBits() <= ref.getRawBits()) ? true : false);
}

bool Fixed::operator>=(const Fixed &ref)
{
	return ((getRawBits() >= ref.getRawBits()) ? true : false);
}

bool Fixed::operator==(const Fixed &ref)
{
	return ((getRawBits() == ref.getRawBits()) ? true : false);
}

bool Fixed::operator!=(const Fixed &ref)
{
	return ((getRawBits() != ref.getRawBits()) ? true : false);
}

Fixed Fixed::operator+(const Fixed &ref)
{
	Fixed tmp(toFloat() + ref.toFloat());
	return (tmp);
}

Fixed Fixed::operator-(const Fixed &ref)
{
	Fixed tmp(toFloat() - ref.toFloat());
	return (tmp);
}

Fixed Fixed::operator*(const Fixed &ref)
{
	Fixed tmp(this->toFloat() * ref.toFloat());
	return (tmp);
}

Fixed Fixed::operator/(const Fixed &ref)
{
	Fixed tmp(toFloat() / ref.toFloat());
	return (tmp);
}

Fixed Fixed::operator++()
{
	value++;
	return (*this);
}

Fixed Fixed::operator--()
{
	value--;
	return (*this);
}

const Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	value++;
	return (tmp);
}

const Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	value--;
	return (tmp);
}

Fixed Fixed::min(const Fixed &ref1, const Fixed &ref2)
{
	if (ref1.getRawBits() < ref2.getRawBits())
		return (ref1);
	else if (ref1.getRawBits() == ref2.getRawBits())
		return (ref1);
	else
		return (ref2);
}

Fixed Fixed::max(const Fixed &ref1, const Fixed &ref2)
{
	if (ref1.getRawBits() > ref2.getRawBits())
		return (ref1);
	else if (ref1.getRawBits() == ref2.getRawBits())
		return (ref1);
	else
		return (ref2);
}