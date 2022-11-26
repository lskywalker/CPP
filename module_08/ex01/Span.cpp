#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int N) : _size(N) {}

Span::Span(const Span &copy) : _size(copy._size), _vector(copy._vector)
{
	*this = copy;
}

Span::~Span() {}

Span	&Span::operator=(const Span &copy)
{
	if (this == &copy)
		return *this;
	this->_vector = copy._vector;
	this->_size = copy._size;
	return *this;
}

void	Span::addNumber(int N)
{
	if (this->_vector.size() == this->_size)
		throw SpanIsFull();
	this->_vector.push_back(N);
}

void	Span::addRange(IT begin, IT end)
{
	if (this->_vector.size() + std::distance(begin, end) > this->_size)
		throw SpanIsFull();
	this->_vector.insert(this->_vector.end(), begin, end);
}

unsigned int	Span::shortestSpan() const
{
	if (this->_size < 2 || this->_vector.size() < 2)
		throw SizeTooSmall();

	std::vector<int>	copy(this->_vector);
	std::sort(copy.begin(), copy.end());
	int ret = *(copy.begin() + 1) - *copy.begin();
	for (IT i = copy.begin(); i != copy.end() - 1; i++)
	{
		if(*(i + 1) - *i < ret)
			ret = *(i + 1) - *i;
	}
	return ret;
}

unsigned int	Span::longestSpan() const
{
	if (this->_size < 2 || this->_vector.size() < 2)
		throw SizeTooSmall();

	return (*std::max_element(this->_vector.begin(), this->_vector.end()) -
			*std::min_element(this->_vector.begin(), this->_vector.end()));
}

std::size_t		Span::size() const
{
	return this->_size;
}

const char	*Span::SizeTooSmall::what() const throw()
{
	return "Size of Span is too small!";
}

const char	*Span::SpanIsFull::what() const throw()
{
	return "Can't add another number, Span is full!";
}
