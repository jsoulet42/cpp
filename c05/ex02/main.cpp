/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:12:30 by jsoulet           #+#    #+#             */
/*   Updated: 2023/10/10 22:30:19 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
	AForm *shru = new ShrubberyCreationForm("jardin");
	AForm *robot = new RobotomyRequestForm("leFryou");
	AForm *president = new PresidentialPardonForm("matthieu");
	Bureaucrat *bubu = new Bureaucrat("bubu", 1);

	std::cout << *shru << std::endl;
	std::cout << *robot << std::endl;
	std::cout << *president << std::endl;
	std::cout << *bubu << std::endl << std::endl;

	try
	{
		bubu->executeForm(*shru);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	try
	{
		bubu->signForm(*shru);
		bubu->executeForm(*shru);
		bubu->signForm(*robot);
		bubu->executeForm(*robot);
		bubu->signForm(*president);
		bubu->executeForm(*president);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

}
