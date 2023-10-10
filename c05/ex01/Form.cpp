/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:45:11 by jsoulet           #+#    #+#             */
/*   Updated: 2023/10/08 12:46:44 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Form::Form(): _name("default"), _signed(false), _forSigned(0), _forExecute(0)
{
}

Form::Form(Form const &src): _name(src.getName()), _signed(src.getSigned()), _forSigned(src.getForSigned()), _forExecute(src.getForExecute())
{
}

Form::~Form()
{
}

Form &	Form::operator=(Form const &rSym)
{
	if (this != &rSym)
	{
		this->_signed = rSym.getSigned();
	}
	return *this;
}

Form::Form(std::string name, int forSigned, int forExecute): _name(name), _signed(false), _forSigned(forSigned), _forExecute(forExecute)
{
	try
	{
		if (forSigned < 1 || forExecute < 1)
			throw GradeTooHighException();
		else if (forSigned > 150 || forExecute > 150)
			throw GradeTooLowException();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

std::ostream &	operator<<(std::ostream & o, Form const &rSym)
{
	o << rSym.getName() << ", " << rSym.getForSigned() << ", " << rSym.getForExecute();
	if (rSym.getSigned())
		o << ", signed";
	else
		o << ", not signed";
	return o;
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

std::string const Form::getName() const
{
	return this->_name;
}

bool Form::getSigned() const
{
	return this->_signed;
}

int Form::getForSigned() const
{
	return this->_forSigned;
}

int Form::getForExecute() const
{
	return this->_forExecute;
}
/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

const char * Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high\n");
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("grade too low\n");
}

void Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > this->_forSigned)
		throw GradeTooLowException();
	this->_signed = true;
}

