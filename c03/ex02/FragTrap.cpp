/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:29:36 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/07 13:09:54 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDammage = 30; 
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "destructor FragTrap called" << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap const &src): ClapTrap(src)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}
DiamondTrap& DiamondTrap::operator=(DiamondTrap const &rhs)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_attackDammage = rhs._attackDammage;
        this->_energyPoints = rhs._energyPoints;
        this->_hitPoints = rhs._hitPoints;
    }
    return *this;
}

void DiamondTrap::highFivesGuys(void)
{
    std::cout << "FragTrap : plz give me five guys" << std::endl;
    
}