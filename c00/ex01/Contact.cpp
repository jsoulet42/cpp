/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 09:33:16 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/14 10:27:31 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

contact::contact(void)
{
	;
}

contact::~contact(void)
{
	;
}

void contact::setFirstName(std::string firstName) { this->firstName = firstName;}
void contact::setLastName(std::string lastName) { this->lastName = lastName;}
void contact::setNickName(std::string nickName) { this->nickName = nickName;}
void contact::setPhoneNumber(std::string phoneNumber) { this->phoneNumber = phoneNumber;}
void contact::setDarkestSecret(std::string darkestSecret) { this->darkestSecret = darkestSecret;}
std::string contact::getFirstName(void) { return (this->firstName);}
std::string contact::getLastName(void) { return (this->lastName);}
std::string contact::getNickName(void) { return (this->nickName);}
std::string contact::getPhoneNumber(void) { return (this->phoneNumber);}
std::string contact::getDarkestSecret(void) { return (this->darkestSecret);}
