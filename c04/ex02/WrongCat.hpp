
#pragma once

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
			WrongCat();
			virtual ~WrongCat();
			WrongCat(WrongCat const &src);
			WrongCat& operator=(WrongCat const &rhs);
			void MakeSound() const;
};
