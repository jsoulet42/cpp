/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:57:35 by jsoulet           #+#    #+#             */
/*   Updated: 2023/10/16 23:40:46 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
	int		a;
	Array<int> arrayA(4);
	Array<int> arrayB(2);

	std::cout << "create arrayA (size 4) and Array b (size 2)" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		try
		{
			a = arrayA[i];
			std::cout << "arrayA[" << i << "] = " << a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

	}
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		try
		{
			a = arrayB[i];
			std::cout << "arrayA[" << i << "] = " << a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

	}
	std::cout << std::endl;
	std::cout << "fill array value" << std::endl;
	for(int i = 0; i < 4; i++)
		arrayA[i] = i;
	std::cout << "arrayA size = " << arrayA.size() << std::endl;
	std::cout << "arrayB size = " << arrayB.size() << std::endl;
	arrayB = arrayA;
	std::cout << "arrayB = arrayA" << std::endl;
	std::cout << "arrayA size = " << arrayA.size() << std::endl;
	std::cout << "arrayB size = " << arrayB.size() << std::endl;
	for (int i = 0; i < 5; i++)
	{
		try
		{
			a = arrayA[i];
			std::cout << "array1[" << i << "] = " << a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		try
		{
			a = arrayB[i];
			std::cout << "array2[" << i << "] = " << a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		arrayA[i] = i + 2;
	std::cout << "change value in arrayA" << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		try
		{
			a = arrayA[i];
			std::cout << "array1[" << i << "] = " << a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		try
		{
			a = arrayB[i];
			std::cout << "array2[" << i << "] = " << a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
}
