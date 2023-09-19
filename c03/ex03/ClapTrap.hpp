/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 23:23:20 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/19 17:02:35 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	protected:

	std::string			_name;
	unsigned int		_hitpoints = 10;
	unsigned int		_nrgpoints = 10;
	unsigned int		_atkdmg = 0;


	public:

	ClapTrap();
	ClapTrap(std::string const name);
	~ClapTrap();
	ClapTrap(ClapTrap const &src);
	ClapTrap& operator=(ClapTrap const &rhs);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
