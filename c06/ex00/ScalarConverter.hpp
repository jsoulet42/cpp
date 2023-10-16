#pragma once

#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <sstream>
#include <cctype>
#include <iomanip>
#include <limits>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &other);
		~ScalarConverter();
		ScalarConverter &operator=(ScalarConverter const &other);

	public:

		static int Convert(char *av);




		class UnknownString: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, ScalarConverter const &base);
