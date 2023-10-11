#include "RobotomyRequestForm.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("default")
{
	std::cout << "[C] RobotomyRequestForm default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src): AForm(src.getName(), 72, 45)
{
	this->_target = src._target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const &rSym)
{
	if (this != &rSym)
	{
		this->_target = rSym._target;
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, RobotomyRequestForm const  &rSym)
{
	o << rSym.getTarget() << ", " << rSym.getName() << ", " << rSym.getForSigned() << ", " << rSym.getForExecute() << std::endl;
	return o;
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

std::string RobotomyRequestForm::getTarget() const
{
	return this->_target;
}

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int	i = 0;

	if (executor.getGrade() > this->getForExecute())
	{
		std::cout << "grade for execute is: " << this->getForExecute() << " but " << executor.getName() << " have ";
		throw GradeTooLowException();
	}
	std::cout << "Drilling noises" << std::endl;
	sleep(1);
	std::cout << "Drilling noises" << std::endl;
	sleep(1);
	std::cout << "Drilling noises" << std::endl;
	sleep(1);
	srand(time(NULL));
	i = rand();
	if (i % 2 == 0)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " has not been robotomized successfully" << std::endl;
}
