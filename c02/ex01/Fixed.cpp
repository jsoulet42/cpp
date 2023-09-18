/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:16:43 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/22 09:35:41 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(float const n): _value(roundf(n * (1 << Fixed::_heightBit)))
{
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const n): _value(n << Fixed::_heightBit)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignation operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_value / (1 << Fixed::_heightBit);
}

int		Fixed::toInt(void) const
{
	return this->_value >> Fixed::_heightBit;
}