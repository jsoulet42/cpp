/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:59:29 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/21 15:55:42 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
			Fixed(void);
			Fixed(Fixed const &fixed);
			Fixed &operator=(Fixed const &Sym);
			~Fixed(void);
			int getRawBits(void) const;
			void setRawBits(int const raw);

	private:
			int value;
			int static const heightBit = 8;

};

#endif
