/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:57:36 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/15 20:36:16 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "HumanA.hpp"
#include "Weapon.hpp"

class HumanB
{
	private:
			std::string _name;
			Weapon *_weapon;
	public:
			HumanB(std::string name);
			~HumanB(void);
			void attack(void);
			void setWeapon(Weapon &weapon);
};

#endif
