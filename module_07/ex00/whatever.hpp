#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
const T &min(const T &x, const T &y)
{
	if (x < y)
		return x;
	return y;
}

template<typename T>
const T &max(const T &x, const T &y)
{
	if (x > y)
		return x;
	return y;
}

#endif