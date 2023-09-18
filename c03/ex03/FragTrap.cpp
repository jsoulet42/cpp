/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:29:36 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/07 13:18:48 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDammage = 30; 
}

FragTrap::~FragTrap(void)
{
    std::cout << "destructor FragTrap called" << std::endl;
}
FragTrap::FragTrap(FragTrap const &src): ClapTrap(src)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}
FragTrap& FragTrap::operator=(FragTrap const &rhs)
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

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap : plz give me five guys" << std::endl;
    
}