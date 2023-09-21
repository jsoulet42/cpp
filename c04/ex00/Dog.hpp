/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:50:47 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/20 11:33:01 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
    public :
            Dog(void);
            ~Dog(void);
            Dog(Dog const &src);
            Dog& operator=(const Dog &rhs);
            virtual void MakeSound() const;
};
