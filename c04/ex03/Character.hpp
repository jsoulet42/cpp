/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:33:51 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/22 13:17:38 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_HPP_
#define _CHARACTER_HPP_

#include <iostream>
#include <string>
#include "Ice.hpp"
#include "Cure.hpp"

class ICharacter
{
	public:
		virtual ~ICharacter();
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character: public ICharacter
{
	public:
		Character(std::string name);
		Character(Character const &src);
		~Character();
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		std::string const &getInv(int i) const;

		Character &	operator=(Character const &rSym);
	private:
		int inventoryFully;
		std::string _name;
		AMateria *_inventory[4];
};

std::ostream &	operator<<(std::ostream & o, Character const &rSym);

#endif
