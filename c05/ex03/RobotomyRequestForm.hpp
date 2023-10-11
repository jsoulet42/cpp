#ifndef _ROBOTOMYREQUESTFORM_HPP_
#define _ROBOTOMYREQUESTFORM_HPP_

#include <iostream>
#include <string>
#include <AForm.hpp>
#include <unistd.h>
#include <ctime>
#include <cstdlib>

typedef std::string str;

class RobotomyRequestForm: public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		virtual ~RobotomyRequestForm();
		std::string getTarget() const;

		RobotomyRequestForm &	operator=(RobotomyRequestForm const &rSym);


		virtual void execute(Bureaucrat const & executor) const;
	private:
		std::string	_target;
};

std::ostream &	operator<<(std::ostream & o, RobotomyRequestForm const  &rSym);

#endif
