/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:46:36 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/13 11:32:56 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
    protected :
                std::string _type;

    public :
                Animal();
                virtual ~Animal(void);
                Animal(Animal const &src);
                Animal& operator=(Animal const &rhs);
                std::string    getType() const;
		        virtual void	MakeSound() const;
};
