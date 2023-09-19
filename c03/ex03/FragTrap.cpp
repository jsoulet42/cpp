/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:17:55 by rrodor            #+#    #+#             */
/*   Updated: 2023/09/19 17:05:38 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
	_hitpoints = 100;
	_nrgpoints = 100;
	_atkdmg = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name)
{
	std::cout << "FragTrap Constructor called" << std::endl;
	_hitpoints = 100;
	_nrgpoints = 100;
	_atkdmg = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &rhs)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_atkdmg = rhs._atkdmg;
        this->_nrgpoints = rhs._nrgpoints;
        this->_hitpoints = rhs._hitpoints;
    }
    return *this;
}

FragTrap::FragTrap(FragTrap const &src): ClapTrap(src)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap ask for a high five" << std::endl;
}
