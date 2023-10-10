/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:46:10 by jsoulet           #+#    #+#             */
/*   Updated: 2023/10/08 12:46:30 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP_
#define _FORM_HPP_

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
	private:
				std::string const	_name;
				bool				_signed;
				const int			_forSigned;
				const int			_forExecute;

	public:
				Form();
				Form(Form const &src);
				Form(std::string name, int forSigned, int forExecute);
				~Form();

				std::string const getName() const;
				bool getSigned() const;
				int getForSigned() const;
				int getForExecute() const;
				void beSigned(Bureaucrat const &b);

				Form &	operator=(Form const &rSym);

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &	operator<<(std::ostream & o, Form const &rSym);

#endif
