#ifndef _ICE_HPP_
#define _ICE_HPP_

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "Character.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(Ice const &src);
		~Ice();

		Ice &	operator=(Ice const &rhs);
		virtual AMateria* clone() const;
		void use(ICharacter &target);
	private:
			std::string _type;
};


#endif
