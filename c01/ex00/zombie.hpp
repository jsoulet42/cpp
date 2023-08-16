/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 06:52:16 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/15 08:00:52 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
			std::string _name;
	public:
			Zombie(void);
			Zombie(std::string name);
			~Zombie(void);
			void announce(void);
			void setName(std::string name);
			Zombie *newZombie(std::string name);
			void randomChump(std::string name);
};

#endif
