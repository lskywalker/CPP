#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class   Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &f);
		~Fixed();
		Fixed & operator = (const Fixed &f);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
	private:
		int				 	nb;
		static const int	fracbits;
};

#endif