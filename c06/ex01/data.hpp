/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:18:44 by jsoulet           #+#    #+#             */
/*   Updated: 2023/10/15 15:18:48 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#pragma once

#include <iostream>
#include <stdint.h>

struct Data
{
	int n;
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);
