#include <iostream>
#include <vector>
#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	int i;
	int nb;
	std::vector<int> vec;
	std::list<int> list;
	PmergeMe	PmergeMe;

	if (ac < 3)
		std::cout << "number of argument is wrong" << std::endl;
	for (i = 1; av[i] != NULL; i++)
	{
		for (int j = 0; av[i][j] != '\0'; j++)
			if (!isdigit(av[i][j]))
				return std::cout << "Error." << std::endl, 1;
		nb = atoi(av[i]);
		if (nb < 0)
			return std::cout << "Error." << std::endl, 1;
		vec.push_back(nb);
		list.push_back(nb);
	}
	PmergeMe.mergeSort(vec, list);
	return 0;
}
