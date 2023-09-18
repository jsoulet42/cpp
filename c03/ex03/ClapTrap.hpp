/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:08:16 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/05 15:15:35 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
    public :
            ClapTrap(void);
            ClapTrap(std::string name);
            ClapTrap(ClapTrap const &src);
            ClapTrap& operator=(ClapTrap const &rhs);
            ~ClapTrap(void);
            void attack(const std::string& target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);


    protected :
            std::string _name;
            unsigned int _hitPoints;
            unsigned int _energyPoints;
            unsigned int _attackDammage;
};





