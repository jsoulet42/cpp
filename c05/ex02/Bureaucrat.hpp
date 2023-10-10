/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:45:26 by jsoulet           #+#    #+#             */
/*   Updated: 2023/10/10 19:16:10 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>

class AForm;

class Bureaucrat
{
	private:
				std::string const _name;
				int _grade;


	public:
				Bureaucrat();
				Bureaucrat(Bureaucrat const &src);
				~Bureaucrat();
				Bureaucrat(std::string const name, int grade);

				Bureaucrat &	operator=(Bureaucrat const &rSym);

				std::string const	getName() const;
				int					getGrade() const;
				void				upGrade();
				void				downGrade();
				void				signForm(AForm &f);
				void				executeForm(AForm const &form);

	class GradeTooHighException: public std::exception
	{
		public:
				virtual const char * what() const throw();

	};

	class GradeTooLowException: public std::exception
	{
		public:
				virtual const char * what() const throw();
	};
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const &rSym);

#include "AForm.hpp"

