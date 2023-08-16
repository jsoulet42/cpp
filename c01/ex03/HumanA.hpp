/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:15:16 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/15 19:47:48 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanA
{
	private:
			std::string _name;
			Weapon &weapon;
	public:
			HumanA(std::string name, Weapon &w);
			~HumanA(void);
			void attack(void);
};

#endif
