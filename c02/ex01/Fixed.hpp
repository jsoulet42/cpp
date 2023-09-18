/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:59:29 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/22 09:35:15 by jsoulet          ###   ########.fr       */
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
			Fixed &operator=(Fixed const &Sym);
			~Fixed(void);
			int getRawBits(void) const;
			void setRawBits(int const raw);
			Fixed(int const value);
			Fixed(float const value);
			float toFloat(void) const;
			int toInt(void) const;

	private:
			int _value;
			int static const _heightBit = 8;

};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif
