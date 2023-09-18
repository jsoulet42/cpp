/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:18:32 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/07 13:21:02 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public :
            ~DiamondTrap(void);
            DiamondTrap(DiamondTrap const &src);
            DiamondTrap& operator=(DiamondTrap const &rhs);
            DiamondTrap(std::string name);
            void whoAmI();
    private : 
            std::string _name;
};