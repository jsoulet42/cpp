/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:14:48 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/22 11:19:24 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ICharacter;

class AMateria
{
	protected:
			std::string _type;

	public:
			AMateria();
			~AMateria();
			AMateria(AMateria const &src);
			AMateria& operator=(AMateria const &rhs);
			AMateria(std::string const & type);

			std::string const & getType() const; //Returns the materia type
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);
			void fillInventory(AMateria *_inventory);
};
