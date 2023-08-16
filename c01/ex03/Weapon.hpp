/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:03:35 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/15 19:55:56 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <iomanip>

class Weapon
{
	private:
			std::string _string;
	public:
			Weapon(void);
			Weapon(std::string string);
			~Weapon(void);
			std::string const &getType(void) const;
			void setType(std::string string);


};

#endif
