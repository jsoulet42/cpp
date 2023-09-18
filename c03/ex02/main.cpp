/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:16:35 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/07 13:09:54 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    DiamondTrap    c1("FragTrap1");
    DiamondTrap    c2(c1);
    DiamondTrap    c3(void);

    c1.attack("ennemy");
    c1.takeDamage(30);
    c1.beRepaired(10);
    c1.highFivesGuys();
    return(0);
}