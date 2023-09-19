/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 23:22:18 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/19 16:57:16 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const name) : _name(name)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
	//this->_name = name;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
	return ;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_nrgpoints = rhs._nrgpoints;
		this->_atkdmg = rhs._atkdmg;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitpoints && this->_nrgpoints)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing "
		<< _atkdmg << " points of damage! " << std::endl;
		this->_nrgpoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage from the ennemie"
	<< std::endl;
	this->_hitpoints -= amount;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints && this->_nrgpoints)
	{
		std::cout << "ClapTrap " << this->_name << " heal " << amount
		<< " lifepoint " << std::endl;
		this->_nrgpoints--;
	}
}
