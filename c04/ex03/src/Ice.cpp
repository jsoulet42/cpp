/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:00:02 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/22 22:56:14 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Ice.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Ice::Ice(): AMateria("ice")
{
	std::cout << "[C] Ice default constructor called." << std::endl;
}

Ice::Ice(Ice const &src): AMateria(src)
{
	std::cout << "[C] Ice copy constructor called." << std::endl;
	*this = src;
}

Ice::~Ice()
{
	std::cout << "[D] Ice default destructor called." << std::endl;
}

Ice &	Ice::operator=(Ice const &rhs)
{
	std::cout << "Ice assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

AMateria* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
