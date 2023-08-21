/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:03:10 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/17 11:15:13 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void Harl::debug(void)
{
	std::cout << " debug message: Segmentation fault (core dumped) " << std::endl;
}

void Harl::info(void)
{
	std::cout << " info: variable uninitialised " << std::endl;
}

void Harl::warning(void)
{
	std::cout << " Warning: your cumputer destroy in 5 sec... " << std::endl;
}

void Harl::error(void)
{
	std::cout << "error message: you have no brain..." << std::endl;
}

static void toUpper(std::string &str)
{
	for (unsigned int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
}

void Harl::complain(std::string level)
{
	std::string _level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	toUpper(level);
	for (i = 0; i < 4; i++)
		if (level == _level[i])
			break ;
	switch (i)
	{
		case 0:
				Harl::debug();
		case 1:
				Harl::info();
		case 2:
				Harl::warning();
		case 3:
				Harl::error();
				break ;
		default:
				std::cout << " invalid level " << std::endl;
				return ;
	}
}
