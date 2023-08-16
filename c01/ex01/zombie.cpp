/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 07:23:23 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/15 15:16:38 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}
Zombie::Zombie(std::string name)
{
	this->_name = name;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << ": I'll be back" << std::endl;
	return ;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie* ZombieHorde(int n, std::string name)
{
	Zombie *z = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		z[i].setName(name);
		z[i].announce();
	}
	return (z);
}
