/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:53:34 by jsoulet           #+#    #+#             */
/*   Updated: 2023/10/23 17:14:48 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MateriaSource.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

MateriaSource::MateriaSource(): _memFully(0)
{
	std::cout << "[C] MateriaSource default constructor called." << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	std::cout << "[C] MateriaSource copy constructor called." << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource()
{
	std::cout << "[D] MateriaSource default destructor called." << std::endl;
	for (int i = 0; i < this->_memFully; i++)
		delete this->_mem[i];
}

MateriaSource &	MateriaSource::operator=(MateriaSource const &rhs)
{
	std::cout << "MateriaSource assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_memFully = rhs._memFully;
		for (int Case = 0; Case < 4; Case++)
			this->_mem[Case] = rhs._mem[Case];

	}
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

void	MateriaSource::getMemory() const {
	std::cout << "MateriaSource's memory contain :" << std::endl;
	for (int Case = 0; Case < _memFully; Case++)
		std::cout << "\t[" << Case << "] " << this->_mem[Case]->getType() << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void MateriaSource::learnMateria(AMateria* m)
{
	if (this->_memFully >= 4)
	{
		std::cout << "MateriaSource memory is full, cant add a new AMateria" << std::endl;
		return;
	}
	this->_mem[_memFully] = m;
	this->_memFully++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int Case = 0; Case < _memFully; Case++)
	{
		if (this->_mem[Case]->getType() == type)
			return (this->_mem[Case]->clone());
	}
	std::cout << "this Amateria dont have the type " << type << std::endl;
	return NULL;
}
