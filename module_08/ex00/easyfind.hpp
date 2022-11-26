#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>
# include <list>

template<typename T>
int easyfind(T &container, int needle)
{
	typename T::iterator i;

	i = std::find(container.begin(), container.end(), needle);
	if (i == container.end())
		throw std::runtime_error("Number not found");
	return (*i);
}

#endif