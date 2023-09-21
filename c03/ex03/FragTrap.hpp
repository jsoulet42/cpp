/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:17:18 by rrodor            #+#    #+#             */
/*   Updated: 2023/09/20 11:37:47 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:

		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(FragTrap const &src);
		FragTrap& operator=(FragTrap const &rhs);

		void	highFivesGuys(void);
};
