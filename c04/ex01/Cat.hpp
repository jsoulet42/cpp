/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:50:41 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/13 11:31:41 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal
{
    public:
            Cat();
            ~Cat(void);
            Cat(Cat const &src);
            Cat& operator=(Cat const &rhs);
            void MakeSound() const;
};
