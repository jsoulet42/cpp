/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:50:36 by jsoulet           #+#    #+#             */
/*   Updated: 2023/10/24 13:22:24 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal()
{
    std::cout << "Cat constructor called" << std::endl;
    this->_type = "cat";
	this->_Brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
	delete this->_Brain;
}

Cat &Cat::operator=(Cat const &rhs)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs.getType();

    }
    return *this;
}

Cat::Cat(Cat const &src): Animal()
{
	std::cout << "Cat copy operator called" << std::endl;
	*this = src;
}

void Cat::MakeSound() const
{
    std::cout << "Miaouuuuuu!!!!" << std::endl;
}
