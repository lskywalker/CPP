#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed{
public:
	Fixed();

	Fixed(const int num);

	Fixed(const float num);

	~Fixed();

	Fixed(Fixed const &fixed);

	Fixed &operator=(const Fixed &ref);

	int getRawBits(void) const;

	void setRawBits(const int raw);

	float toFloat(void) const;

	int toInt(void) const;

private:
	int value;

	const static int bitCount = 8;
};

std::ostream& operator<<(std::ostream &outputStream, const Fixed &ref);

#endif
