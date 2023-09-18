/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:30:35 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/07 13:09:54 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ClapTrap
{
    public :
            DiamondTrap(std::string name);
            ~DiamondTrap(void);
            DiamondTrap(DiamondTrap const &src);
            DiamondTrap& operator=(DiamondTrap const &rhs);
            void highFivesGuys(void);
};