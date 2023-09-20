/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:08:16 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/20 07:24:33 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
    public :
            ClapTrap(void);
            ClapTrap(std::string name);
            ~ClapTrap(void);
            void attack(const std::string& target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
			ClapTrap & operator=(ClapTrap const &rhs);


    private :
            std::string _name;
            unsigned int _hitPoints;
            unsigned int _energyPoints;
            unsigned int _attackDammage;
};





