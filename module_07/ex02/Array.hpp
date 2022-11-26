#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array
{
	private:
		T			*_head;
		std::size_t	_size;

	public:
		Array() : _head(NULL), _size(0) {}
		Array(unsigned int n) : _head(new T[n]), _size(n) {}

		Array(Array<T> &copy) : _head(new T[copy._size]), _size(copy._size)
		{
			for (std::size_t i = 0; i < this->_size; i++)
				this->_head[i] = copy._head[i];
		}

		Array<T>	&operator=(Array<T> &copy)
		{
			if (this == &copy)
				return *this;
			if (this->_size != copy._size)
			{
				if (this->_head != NULL)
					delete this->_head;
				this->_head = new T[copy._size];
				this->_size = copy.getSize();
			}
			for (std::size_t i = 0; i < this->_size; i++)
				this->_head[i] = copy[i];
			return *this;
		}

		T	&operator[](std::size_t i)
		{
			if (i >= this->_size || i < 0)
				throw Array::InvalidIndex();
			return this->_head[i];
		}

		std::size_t	getSize() const
		{
			return this->_size;
		}

		~Array()
		{
			delete[] this->_head;
		}

		class InvalidIndex : public std::exception
		{
			public: virtual const char *what() const throw()
			{
				return "Invalid index: Index is invalid!";
			}
		};
};	

#endif