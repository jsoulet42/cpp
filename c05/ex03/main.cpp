/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:12:30 by jsoulet           #+#    #+#             */
/*   Updated: 2023/10/11 15:20:50 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
	AForm *shru;
	AForm *robot;
	AForm *president;
	AForm *fakeForm;
	Bureaucrat *bubu = new Bureaucrat("bubu", 1);
	Intern *intern = new Intern();

	shru = intern->makeForm("shrubbery", "leJardin");
	president = intern->makeForm("presidential pardon", "matthieu");
	robot = intern->makeForm("robotomy", "leFryou");
	fakeForm = intern->makeForm("fakeNews", "tv");


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
	delete shru;
	delete robot;
	delete president;
	delete bubu;
	delete fakeForm;
	delete intern;
}
