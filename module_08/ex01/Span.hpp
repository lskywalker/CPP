#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <vector>
# include <algorithm>

class Span
{
	private:
		Span();
		unsigned int						_size;
		std::vector<int>					_vector;
		typedef std::vector<int>::iterator	IT;

	public:
		Span(unsigned int N);
		~Span();
		Span(const Span &copy);
		Span	&operator=(const Span &copy);

		void			addNumber(int N);
		void			addRange(IT begin, IT end);
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;
		std::size_t		size() const;

		class SpanIsFull : public std::exception
		{
			public: virtual const char* what() const throw();
		};
		class SizeTooSmall : public std::exception
		{
			public: virtual const char* what() const throw();
		};
};

#endif