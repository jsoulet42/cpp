#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "number of argument is wrong" << std::endl; return 1;
	try
	{
		RPN	instance(av[1]);
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
