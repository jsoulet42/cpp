/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:34:24 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/23 18:32:40 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../AMateria.hpp"
#include "../Character.hpp"
#include "../MateriaSource.hpp"

int main()
{

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	AMateria* tmp;
	AMateria* tmp2;
	AMateria* tmp3;
	AMateria* tmp4;
	std::cout << "---------------------" << std::endl;
	ICharacter* me = new Character("me");
	std::cout << "---------------------" << std::endl << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);
	tmp3 = src->createMateria("ice");
	me->equip(tmp3);
	tmp4 = src->createMateria("cure");
	me->equip(tmp4);
	std::cout << "---------------------" << std::endl;
	ICharacter* bob = new Character("bob");
	std::cout << "---------------------" << std::endl << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	std::cout << "---------------------" << std::endl << std::endl;
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	me->unequip(4);
	std::cout << "---------------------" << std::endl;
	ICharacter* bob2 = new Character("bob2");
	ICharacter* bob3 = new Character("bob3");
	std::cout << "---------------------" << std::endl << std::endl;
	*bob2 = *bob3;
	std::cout << "---------------------" << std::endl << std::endl;
	delete bob;
	delete bob2;
	delete bob3;
	delete me;
	delete src;
	delete tmp;
	delete tmp2;
	delete tmp3;
	delete tmp4;
	return 0;
}
