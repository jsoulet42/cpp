/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:45:20 by jsoulet           #+#    #+#             */
/*   Updated: 2023/10/08 10:30:04 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Bureaucrat::Bureaucrat(): _name("default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name), _grade(grade)
{
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const &rSym)
{
	if (this != &rSym)
	{
		this->_grade = rSym.getGrade();
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const &rSym)
{
	o << rSym.getName() << ", grade Bureaucrat grade " << rSym.getGrade() << ".";
	return o;
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

std::string const Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */


const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high\n");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade too low\n");
}

void Bureaucrat::upGrade()
{
	this->_grade--;
	if (this->getGrade() < 1)
		throw GradeTooHighException();
}

void Bureaucrat::downGrade()
{
	this->_grade++;
	if (this->_grade > 150)
		throw GradeTooLowException();
}

void Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->getName() << " signs " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " cannot sign " << f.getName() << " because " << e.what() << std::endl;
	}

}
