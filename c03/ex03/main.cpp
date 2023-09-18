/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:16:35 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/07 13:21:39 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap    c1("DiamondTrap1");
    DiamondTrap    c2(c1);
    DiamondTrap    c3(void);

    c1.attack("ennemy");
    c1.takeDamage(30);
    c1.beRepaired(10);
    c1.guardGate();
    c1.highFivesGuys();
    c1.whoAmI();
    
    return(0);
}