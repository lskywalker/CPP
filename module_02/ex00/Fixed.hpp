#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class   Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed & operator = (Fixed const &ref);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
	private:
		int				 	value;
		static const int	bitCount = 8;
};

#endif