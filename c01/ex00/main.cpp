/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 06:51:16 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/15 09:50:36 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
	Zombie *z = NULL;

	z = z->newZombie("franck");
	z->announce();
	z->randomChump(" my name is Zombie");
	delete(z);
	return (0);
}
