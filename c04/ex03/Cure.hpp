#ifndef _CURE_HPP_
#define _CURE_HPP_

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "Character.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(Cure const &src);
		~Cure();

		Cure &	operator=(Cure const &rhs);
		virtual AMateria* clone() const;
		void use(ICharacter &target);
	private:
		std::string _type;
};

#endif
