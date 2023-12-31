/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:18:56 by jsoulet           #+#    #+#             */
/*   Updated: 2023/10/15 15:18:57 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "data.hpp"

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data *data;
	uintptr_t rawData;
	Data *retData;

	data = new Data;

	std::cout << "Data               : " << data << std::endl;
	rawData = serialize(data);
	std::cout << " Raw Data               : " << rawData << std::endl;
	retData = deserialize(rawData);
	std::cout << " Raw Data               : " << retData << std::endl;
	return 0;
}
