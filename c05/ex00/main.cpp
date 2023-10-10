/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:12:30 by jsoulet           #+#    #+#             */
/*   Updated: 2023/09/28 22:19:30 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	Bureaucrat *leSeg = NULL;
	Bureaucrat *fault = NULL;
	Bureaucrat *cMal = NULL;
	Bureaucrat *mVoyez = NULL;

	try
	{
		std::cout << "leSeg" << std::endl;
		leSeg = new Bureaucrat("leSeg", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		fault = new Bureaucrat("fault", 150);
		std::cout << *fault << std::endl;
		std::cout << "use downGrade" << std::endl;
		fault->downGrade();
		std::cout << *fault << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat *cMal = new Bureaucrat("cMal", 1);
		std::cout << *cMal << std::endl;
		std::cout << "use upgrade" << std::endl;
		cMal->upGrade();
		std::cout << *cMal << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat *mVoyez = new Bureaucrat("mVoyez", 42);
		std::cout << *mVoyez << std::endl;
		std::cout << "use upgrade" << std::endl;
		mVoyez->upGrade();
		std::cout << *mVoyez << std::endl;
		std::cout << "use downGrade" << std::endl;
		mVoyez->downGrade();
		std::cout << *mVoyez << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	if (leSeg)
		delete leSeg;
	if (fault)
		delete fault;
	if (cMal)
		delete cMal;
	if (mVoyez)
		delete mVoyez;


}
