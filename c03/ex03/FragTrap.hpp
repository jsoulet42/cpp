/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:30:35 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/07 13:17:28 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public :
            FragTrap(std::string name);
            ~FragTrap(void);
            FragTrap(FragTrap const &src);
            FragTrap& operator=(FragTrap const &rhs);
            void highFivesGuys(void);
};