/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:03:50 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/16 19:08:14 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	private:
			void debug(void);
			void info(void);
			void warning(void);
			void error(void);
	public:
			void complain(std::string level);
			Harl(void);
			~Harl(void);
};

#endif
