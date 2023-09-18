/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:16:35 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/07 11:51:58 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    c1("c1");
    ScavTrap    c2(c1);
    ScavTrap    c3(void);

    c1.attack("ennemy");
    c1.takeDamage(20);
    c1.beRepaired(10);
    c1.guardGate();
    return(0);
}