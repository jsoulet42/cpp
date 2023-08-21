/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 08:47:48 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/16 17:21:48 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filestream.hpp"

void getNewLine(std::string &line, std::string s1, std::string s2)
{
	size_t startPos = 0;

	while ((startPos = line.find(s1, startPos)) != std::string::npos)
	{
		line = line.substr(0, startPos) + s2 + line.substr(startPos + s1.length());
		startPos += s2.length();
	}
}

int main(int argc, char** argv)
{
	std::string line;
	std::string s1;
	std::string s2;
	std::string rename;

	if (argc != 4)
		std::cout << "numbers of arguments is wrong" << std::endl;
	s1 = argv[2];
	s2 = argv[3];
	rename = argv[1];
	rename.append(".replace");
	std::ifstream ifs(argv[1]);
	std::ofstream outfile(rename.c_str());
	if (ifs.is_open())
	{
		while (getline(ifs, line))
		{
			line + "\n";
			getNewLine(line, s1, s2);
			outfile << line;
			if (!ifs.eof())
				outfile << std::endl;
		}
		ifs.close();
		outfile.close();
	}
	else
		std::cout << " cannot open file " << std::endl;
	return 0;
}
