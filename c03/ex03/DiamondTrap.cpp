/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:26:25 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/07 13:29:13 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(_name + "_clap_name"), ScavTrap(_name), FragTrap(_name)
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    _name = name;
    _hitPoints = DiamondTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDammage = DiamondTrap::_attackDammage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamonTrap destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &rhs)
{
    std::cout << "DiamondTrap assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_attackDammage = rhs._attackDammage;
        this->_energyPoints = rhs._energyPoints;
        this->_hitPoints = rhs._hitPoints;
    }
    return *this;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src): FragTrap::FragTrap(src), ScavTrap(src)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is: " << _name << " and ClapTrap name is: " << ClapTrap::_name << std::endl; 
}