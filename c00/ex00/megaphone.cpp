/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 07:31:41 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/14 07:52:36 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {

	if (argc == 1)
		return std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0;
	for (int i = 1; i < argc; i++)
		for (int j = 0; argv[i][j]; j++)
			std::cout << (char)std::toupper(argv[i][j]);
	std::cout << std::endl;
	return 0;
}
