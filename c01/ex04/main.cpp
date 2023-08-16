/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 08:47:48 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/16 10:52:25 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filestream.hpp"

void getNewLine(std::string &line, std::string s1, std::string s2)
{
	for (int i =  0; i < line.length(); i++)
		line[i]
}

int main(int argc, char** argv)
{
	std::string line;
	std::string s1;
	std::string s2;

	/*if (argc != 4)
		std::cout << "numbers of arguments is wrong" << std::endl;*/
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream ifs(argv[1]);
	if (ifs.is_open())
	{
		while (std::getline(ifs, line))
			getNewLine(line, s1, s2);
	}
}
