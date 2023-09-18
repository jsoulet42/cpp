/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:50:47 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/18 17:38:24 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	public :
			Dog(void);
			~Dog(void);
			Dog(Dog const &src);
			Dog& operator=(const Dog &rhs);
			void MakeSound() const;

	private:
			Brain *_Brain;
};
