/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:33:16 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/15 19:55:06 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w) : _name(name), weapon(w)
{
}

HumanA::~HumanA(void)
{
}

void HumanA::attack(void)
{
	std::cout << this->_name;
	std::cout << " attack with their ";
	std::cout << this->weapon.getType() << std::endl;
}
