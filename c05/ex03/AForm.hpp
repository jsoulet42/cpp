/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:46:10 by jsoulet           #+#    #+#             */
/*   Updated: 2023/10/10 23:05:59 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AFORM_HPP_
#define _AFORM_HPP_

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class AForm
{
	private:
				std::string const	_name;
				bool				_signed;
				const int			_forSigned;
				const int			_forExecute;

	public:
				AForm();
				AForm(AForm const &src);
				AForm(std::string name, int forSigned, int forExecute);
				virtual ~AForm();

				std::string const getName() const;
				bool getSigned() const;
				int getForSigned() const;
				int getForExecute() const;
				void beSigned(Bureaucrat const &b);
				virtual void	execute(Bureaucrat const & executor) const = 0;

				AForm &	operator=(AForm const &rSym);

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

std::ostream &	operator<<(std::ostream & o, AForm const &rSym);

#endif
