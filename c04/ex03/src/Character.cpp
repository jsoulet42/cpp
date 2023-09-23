/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:42:19 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/23 18:30:42 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Character.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Character::Character(std::string name): _name(name)
{
	this->inventoryFully = 0;
	std::cout << this->_name << " Character Constructor called" << std::endl;
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const &src)
{
	std::cout << "Character copy constructor called." << std::endl;
	*this = src;
}

Character::~Character()
{
	std::cout << "Character default destructor called." << std::endl;
}

ICharacter::~ICharacter()
{
	std::cout << "ICharacter default destructor called." << std::endl;
}

Character &	Character::operator=(Character const &rhs)
{
	std::cout << "Character assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->inventoryFully = rhs.inventoryFully;
		this->_name = rhs._name;
		for (int Case = 0; Case < 4; Case++)
			this->_inventory[Case] = rhs._inventory[Case];
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Character const &rhs)
{
	for (int i = 0; i < 4; i++)
		o << rhs.getInv(i) << std::endl;
	return o;
}


/* -------------------------------------------------------------------------- */
/*                              Geters & seters                               */
/* -------------------------------------------------------------------------- */

std::string const &	Character::getName() const
{
	return this->_name;
}

std::string const &Character::getInv(int i) const
{
	return this->_inventory[i]->getType();
}

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void Character::use(int Case, ICharacter& target)
{
	if (Case < 0 || Case >= 4 || this->_inventory[Case] == NULL)
		std::cout << "this Case of your inventory is empty" << std::endl;
	else
		this->_inventory[Case]->use(target);
}

void Character::equip(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << "Cannot equip NULL AMateria" << std::endl;
		return;
	}
	if (this->inventoryFully == 4)
	{
		std::cout << "inventory is full plz unequip AMateria for equip " << m->getType() << std::endl;
		return ;
	}
	for (int Case = 0; Case < 4; Case++)
	{
		if (this->_inventory[Case] == NULL)
		{
			this->_inventory[Case] = m;
			std::cout << this->_name << " succefully equip AMateria: " << m->getType() << " at inventory case: " << Case << std::endl;
			this->inventoryFully++;
			break;
		}
	}
}

void Character::unequip(int Case)
{
	if (Case < 0 || Case >= 4 || this->_inventory[Case] == NULL)
		std::cout << "this inventory Case is empty " << std::endl;
	else
	{
		std::cout << this->_name << " unequipe " << this->_inventory[Case]->getType() << std::endl;
		this->_inventory[Case] = NULL;
		this->inventoryFully--;
	}
}
