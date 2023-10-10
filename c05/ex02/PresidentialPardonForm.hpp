#ifndef _PRESIDENTIALPARDONFORM_HPP_
#define _PRESIDENTIALPARDONFORM_HPP_

#include <iostream>
#include <string>
#include <AForm.hpp>

class PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm(std::string target);
		virtual ~PresidentialPardonForm();

		std::string getTarget() const;
		PresidentialPardonForm &	operator=(PresidentialPardonForm const &rSym);

		virtual void execute(Bureaucrat const & executor) const;

	private:
		std::string _target;
};

std::ostream & operator<<(std::ostream & o, PresidentialPardonForm const  &rSym);

#endif
