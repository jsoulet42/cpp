/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 00:52:05 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/19 17:09:55 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:


	public:

	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap& operator=(ScavTrap const &rhs);
	ScavTrap(ScavTrap const &src);

	void	attack(const std::string& target);
	void	guardGate();
};
