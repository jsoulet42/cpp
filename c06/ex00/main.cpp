/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:21:20 by jsoulet           #+#    #+#             */
/*   Updated: 2023/10/16 14:35:49 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "[Error]: " << " Wrong number arguments!\n";
		return (1);
	}
	try
	{
		ScalarConverter::Convert(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << "[Error]: " << e.what() << std::endl;
	}

	return (0);
}
