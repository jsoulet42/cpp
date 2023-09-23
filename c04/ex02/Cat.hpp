/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:50:41 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/23 18:52:17 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
		public:
			Cat();
			~Cat(void);
			Cat(Cat const &src);
			Cat& operator=(Cat const &rhs);
			void MakeSound() const;

		private:
			Brain *_Brain;

};
