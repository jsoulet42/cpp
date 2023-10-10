/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:12:30 by jsoulet           #+#    #+#             */
/*   Updated: 2023/10/08 12:43:56 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	Bureaucrat *macron;
	Bureaucrat *trump;
	Form *warTreaty;

	try
	{
		warTreaty = new Form("warTreaty", 0, 50);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete warTreaty;
	try
	{
		warTreaty = new Form("warTreaty", 50, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete warTreaty;
	try
	{
		warTreaty = new Form("warTreaty", 200, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete warTreaty;
	try
	{
		macron = new Bureaucrat("Macron", 1);
		std::cout << *macron << std::endl;
		trump = new Bureaucrat("Trump", 150);
		std::cout << *trump << std::endl;
		warTreaty = new Form("warTreaty", 10, 50);
		std::cout << *warTreaty << std::endl;
		macron->signForm(*warTreaty);
		trump->signForm(*warTreaty);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete macron;
	delete trump;
	delete warTreaty;
	return(0);
}
