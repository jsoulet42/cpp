/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:26:38 by jsoulet           #+#    #+#             */
/*   Updated: 2023/10/10 22:27:31 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), _target("default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src): AForm(src.getName(), src.getForSigned(), src.getForExecute())
{
	this->_target = src._target;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rSym)
{
	if (this != &rSym)
	{
		this->_target = rSym._target;
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, ShrubberyCreationForm const  &rSym)
{
	o << rSym.getTarget() << ", " << rSym.getName() << ", " << rSym.getForSigned() << ", " << rSym.getForExecute() << std::endl;
	return o;
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

std::string ShrubberyCreationForm::getTarget() const
{
	return this->_target;
}

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream file;
	std::string filename;

	if (executor.getGrade() > this->getForExecute())
	{
		std::cout << "grade for execute is: " << this->getForExecute() << " but " << executor.getName() << " have ";
		throw GradeTooLowException();
	}
	filename = this->_target + "_shrubbery";
	file.open(filename.c_str());
	if (file.is_open())
	{
		file << "          .     .  .      +     .      .          ." << std::endl;
		file << "     .       .      .     #       .           ." << std::endl;
		file << "        .      .         ###            .      .      ." << std::endl;
		file << "      .      .   '#:. .:##'##:. .:#'  .      . "<< std::endl;
		file << "          .      . '####'###'####'  ." << std::endl;
		file << "       .     '#:.    .:#'###'#:.    .:#'  .        .       ." << std::endl;
		file << "  .             '#########'#########'        .        ." << std::endl;
		file << "        .    '#:.  '####'###'####'  .:#'   .       ." << std::endl;
		file << "     .     .  '#######''##'##''#######'                  ." << std::endl;
		file << "                .'##'#####'#####'##'           .      ." << std::endl;
		file << "    .   '#:. ...  .:##'###'###'##:.  ... .:#'     ." << std::endl;
		file << "      .     '#######'##'#####'##'#######'      .     ." << std::endl;
		file << "    .    .     '#####''#######''#####'    .      ." << std::endl;
		file << "            .     '      000      '    .     ." << std::endl;
		file <<"        .         .   .  000     .        .       ." << std::endl;
		file <<". . .. .................O000O........................ ......" << std::endl;
		file << std::endl;
	}
}
