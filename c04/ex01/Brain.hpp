/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:20:58 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/18 15:03:38 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
	public :
			Brain();
			~Brain();
			Brain(Brain const &src);
			Brain &operator=(Brain const &rhs);
			std::string getIdea(int i) const;

	private :
			std::string _idea[100];

};

