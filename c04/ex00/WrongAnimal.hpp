/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:41:13 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/13 11:25:28 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
	public:
			WrongAnimal();
			virtual ~WrongAnimal();
			WrongAnimal(WrongAnimal const &src);
			WrongAnimal& operator=(WrongAnimal const &rhs);
			std::string getType() const;
			void MakeSound() const;

	protected:
			std::string _type;
};
