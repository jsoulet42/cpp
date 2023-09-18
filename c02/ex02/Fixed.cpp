/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:16:43 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/22 16:59:14 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
}

Fixed::Fixed(const Fixed &src)
{
    *this = src;
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(float const n): _value(roundf(n * (1 << Fixed::_heightBit)))
{
	return ;
}

Fixed::Fixed(int const n): _value(n << Fixed::_heightBit)
{
	return ;
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

Fixed 			Fixed::operator+(Fixed const &rhs)
{
	return Fixed(toFloat() + rhs.toFloat());
}

Fixed 			Fixed::operator-(Fixed const &rhs)
{
	return Fixed(toFloat() - rhs.toFloat());
}

Fixed 			Fixed::operator*(Fixed const &rhs)
{
	return Fixed(toFloat() * rhs.toFloat());
}

Fixed 			Fixed::operator/(Fixed const &rhs)
{
	return Fixed(toFloat() - rhs.toFloat());
}

Fixed &			Fixed::operator++(void)
{
	this->_value++;
	return *this;
}

Fixed			Fixed::operator++(int)
{
	Fixed tmp(*this);

	++*this;
	return tmp;
}

Fixed &			Fixed::operator--(void)
{
	this->_value--;
	return *this;
}

Fixed			Fixed::operator--(int)
{
	Fixed tmp(*this);

	--*this;
	return tmp;
}

int	Fixed::getRawBits(void) const
{
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
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

bool	operator>(Fixed const & lhs, Fixed const & rhs)
{
	return lhs.getRawBits() > rhs.getRawBits();
}
bool			operator<(Fixed const & lhs, Fixed const & rhs)
{
	return lhs.getRawBits() < rhs.getRawBits();
}
bool			operator>=(Fixed const & lhs, Fixed const & rhs)
{
	return lhs.getRawBits() >= rhs.getRawBits();
}
bool			operator<=(Fixed const & lhs, Fixed const & rhs)
{
	return lhs.getRawBits() <= rhs.getRawBits();
}
bool			operator==(Fixed const & lhs, Fixed const & rhs)
{
	return lhs.getRawBits() == rhs.getRawBits();
}
bool			operator!=(Fixed const & lhs, Fixed const & rhs)
{
	return lhs.getRawBits() != rhs.getRawBits();
}

Fixed &			Fixed::min(Fixed & lhs, Fixed & rhs)
{
	return (lhs < rhs) ? lhs : rhs;
}

Fixed const &	Fixed::min(Fixed const & lhs, Fixed const & rhs)
{
	return (lhs < rhs) ? lhs : rhs;
}

Fixed &			Fixed::max(Fixed & lhs, Fixed & rhs)
{
	return (lhs > rhs) ? lhs : rhs;
}

Fixed const &	Fixed::max(Fixed const & lhs, Fixed const & rhs)
{
	return (lhs > rhs) ? lhs : rhs;
}