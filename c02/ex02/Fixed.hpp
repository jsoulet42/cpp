/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:59:29 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/22 16:53:00 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
			Fixed(void);
			Fixed(Fixed const &fixed);
			~Fixed(void);
			Fixed				&operator=(Fixed const & rhs);
			Fixed				operator+(Fixed const & rhs);
			Fixed				operator-(Fixed const & rhs);
			Fixed				operator*(Fixed const & rhs);
			Fixed				operator/(Fixed const & rhs);
			Fixed				&operator++(void);
			Fixed				operator++(int);
			Fixed				&operator--(void);
			Fixed				operator--(int);
			int 				getRawBits(void) const;
			void 				setRawBits(int const raw);
			Fixed(int const value);
			Fixed(float const value);
			float 				toFloat(void) const;
			int 				toInt(void) const;
			static Fixed 		&min(Fixed & lhs, Fixed & rhs);
			static Fixed 		&max(Fixed & lhs, Fixed & rhs);
			static Fixed const 	&max(Fixed const & lhs, Fixed const & rhs);
			static Fixed const 	&min(Fixed const & lhs, Fixed const & rhs);

	private:
			int _value;
			int static const _heightBit = 8;

};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

bool			operator>(Fixed const & lhs, Fixed const & rhs);
bool			operator<(Fixed const & lhs, Fixed const & rhs);
bool			operator>=(Fixed const & lhs, Fixed const & rhs);
bool			operator<=(Fixed const & lhs, Fixed const & rhs);
bool			operator==(Fixed const & lhs, Fixed const & rhs);
bool			operator!=(Fixed const & lhs, Fixed const & rhs);

#endif
