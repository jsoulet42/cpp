/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:00:58 by jsoulet           #+#    #+#             */
/*   Updated: 2023/10/18 12:10:23 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int>vec;
	std::list<int>lst;
	int a;
	int b;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	int n = 3;
	a = easyfind<std::vector<int> >(vec, n);
	b = easyfind<std::list<int> >(lst, n);
	if (a >= 0)
		std::cout << "the element index is " << a << " in the vector" << std::endl;
	else
		std::cout << "Error : unable to find the element in the vector" << std::endl;
	if (b >= 0)
		std::cout << "the element index is " << b << " in the list" << std::endl;
	else
		std::cout << "Error : unable to find the element in the list" << std::endl;
	return (0);
}
