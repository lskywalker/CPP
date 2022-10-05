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

    int     getRawBits(void) const;
    void    setRawBits(const int raw);
    float   toFloat(void) const;
    int     toInt(void) const;
    
	Fixed &operator=(const Fixed &ref);

	bool operator>(const Fixed &ref);
	bool operator<(const Fixed &ref);
	bool operator>=(const Fixed &ref);
	bool operator<=(const Fixed &ref);
	bool operator==(const Fixed &ref);
	bool operator!=(const Fixed &ref);

	Fixed operator+(const Fixed &ref);
	Fixed operator-(const Fixed &ref);
	Fixed operator*(const Fixed &ref);
	Fixed operator/(const Fixed &ref);

	Fixed operator++();
	const Fixed operator++(int);
	Fixed operator--();
	const Fixed operator--(int);

	static Fixed min(const Fixed &ref1, const Fixed &ref2);
	static Fixed max(const Fixed &ref1, const Fixed &ref2);
	
private:
	int	value;
	const static int bitCount = 8;

};

	std::ostream& operator<<(std::ostream &outputStream, const Fixed &ref);

#endif