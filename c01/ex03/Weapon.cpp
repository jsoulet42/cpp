/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:34:03 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/15 19:55:30 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {}

Weapon::Weapon(std::string string) : _string(string)
{
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string string)
{
	this->_string = string;
}

std::string const &Weapon::getType(void) const
{
	return _string;
}

