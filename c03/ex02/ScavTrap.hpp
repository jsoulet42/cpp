/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:01:30 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/05 16:33:30 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
            ScavTrap(std::string name);
            ~ScavTrap(void);
            ScavTrap(ScavTrap const &src);
            ScavTrap& operator=(ScavTrap const &rhs);
            void guardGate();
};