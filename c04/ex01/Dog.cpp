/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:50:44 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/23 18:44:03 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal()
{
    std::cout << "Dog constructor called" << std::endl;
    this->_type = "Dog";
	this->_Brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
	delete this->_Brain;
}

Dog& Dog::operator=(Dog const &rhs)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs.getType();
    }
    return *this;
}

Dog::Dog(const Dog &src): Animal()
{
    std::cout << "Dog constructor copy called" << std::endl;
    *this = src;
}

void Dog::MakeSound() const
{
    std::cout << "ouaf" << std::endl;
}
