/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 07:23:23 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/15 08:00:13 by jsoulet          ###   ########.fr       */
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

Zombie* Zombie::newZombie(std::string name)
{
	Zombie *z = new Zombie();
	z->setName(name);
	return (z);

}

void	Zombie::randomChump(std::string name)
{
	Zombie z;

	z.setName(name);
	z.announce();
}

