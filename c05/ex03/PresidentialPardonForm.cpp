
#include "PresidentialPardonForm.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), _target("default")
{
	std::cout << "[C] PresidentialPardonForm default constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src): AForm(src.getName(), 25, 5)
{
	this->_target = src._target;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const &rSym)
{
	if (this != &rSym)
	{
		this->_target = rSym._target;
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, PresidentialPardonForm const  &rSym)
{
	o << rSym.getTarget() << ", " << rSym.getName() << ", " << rSym.getForSigned() << ", " << rSym.getForExecute() << std::endl;
	return o;
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

std::string PresidentialPardonForm::getTarget() const
{
	return this->_target;
}

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getForExecute())
	{
		std::cout << "grade for execute is: " << this->getForExecute() << " but " << executor.getName() << " have ";
		throw GradeTooLowException();
	}
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl << std::endl;
}
