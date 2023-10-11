/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:01:49 by jsoulet           #+#    #+#             */
/*   Updated: 2023/10/11 15:11:39 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const & src);
		~Intern();
		Intern & operator=(Intern const & rhs);

		AForm *makeForm(std::string name, std::string target);
		AForm *makePresidentialPardonForm(std::string target);
		AForm *makeRobotomyRequestForm(std::string target);
		AForm *makeShrubberyCreationForm(std::string target);
};

#endif
