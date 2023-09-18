/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:54:50 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/18 15:10:49 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain copy constructeur" << std::endl;
	*this = src;
}

std::string Brain::getIdea(int i) const
{
	return (this->_idea[i]);
}

Brain &Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain operator assignation called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_idea[i] = rhs.getIdea(i);
	}
	return *this;
}
