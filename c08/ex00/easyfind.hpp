
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>

template <typename T>
int easyfind(T a, int n)
{
	typename T::const_iterator it;

	it = std::find(a.begin(), a.end(), n);
	if (it == a.end() && *it != n)
		return -1;
	else
		return *it;
	return -1;
}
