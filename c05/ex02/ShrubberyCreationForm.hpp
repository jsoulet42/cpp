/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:45:40 by jsoulet           #+#    #+#             */
/*   Updated: 2023/10/10 16:37:39 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SHRUBBERYCREATIONFORM_HPP_
#define _SHRUBBERYCREATIONFORM_HPP_

#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm();
		std::string getTarget() const;
		virtual void	execute(Bureaucrat const & executor) const;

		ShrubberyCreationForm &	operator=(ShrubberyCreationForm const &rSym);
	private:
		std::string	_target;
};

std::ostream &	operator<<(std::ostream & o, ShrubberyCreationForm const  &rSym);

#endif
