/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:46:23 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/13 11:09:47 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(Animal const &rhs)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs.getType();
    }
    return *this;
}

Animal::Animal(Animal const &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

std::string Animal::getType() const
{
    return this->_type;
}

void Animal::MakeSound() const
{

}
