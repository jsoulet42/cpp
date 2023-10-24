/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:00:46 by jsoulet           #+#    #+#             */
/*   Updated: 2023/10/23 16:58:10 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Cure.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Cure::Cure(): AMateria("cure")
{
	std::cout << "[C] Cure default constructor called." << std::endl;
}

Cure::Cure(Cure const &src): AMateria(src)
{
	std::cout << "[C] Cure copy constructor called." << std::endl;
	*this = src;
}

Cure::~Cure()
{
	std::cout << "[D] Cure default destructor called." << std::endl;
}

Cure &	Cure::operator=(Cure const &rhs) {
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

AMateria* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
