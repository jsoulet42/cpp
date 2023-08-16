/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 10:47:01 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/14 15:24:46 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	allupper(std::string str)
{
	for (int i = 0; i < (int)str.length(); i++)
		str[i] = std::toupper(str[i]);
	return (str);
}

PhoneBook::PhoneBook() : repertory(), nbContacts(0), nbContacts2(0)
{
	;
}

PhoneBook::~PhoneBook()
{
	;
}

void PhoneBook::addContact(void)
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << "Enter the first name: ";
	std::getline(std::cin, firstName);
	if (firstName.empty())
	{
		std::cout << "First name cannot be empty" << std::endl;
		return ;
	}
	std::cout << "Enter the last name: ";
	std::getline(std::cin, lastName);
	if (lastName.empty())
	{
		std::cout << "Last name cannot be empty" << std::endl;
		return ;
	}
	std::cout << "Enter the nickname: ";
	std::getline(std::cin, nickName);
	if (nickName.empty())
	{
		std::cout << "Nickname cannot be empty" << std::endl;
		return ;
	}
	std::cout << "Enter the phone number: ";
	std::getline(std::cin, phoneNumber);
	if (phoneNumber.empty())
	{
		std::cout << "Phone number cannot be empty" << std::endl;
		return ;
	}
	std::cout << "Enter the darkest secret: ";
	std::getline(std::cin, darkestSecret);
	if (darkestSecret.empty())
	{
		std::cout << "Darkest secret cannot be empty" << std::endl;
		return ;
	}
	this->repertory[this->nbContacts].setFirstName(firstName);
	this->repertory[this->nbContacts].setLastName(lastName);
	this->repertory[this->nbContacts].setNickName(nickName);
	this->repertory[this->nbContacts].setPhoneNumber(phoneNumber);
	this->repertory[this->nbContacts].setDarkestSecret(darkestSecret);
	this->nbContacts++;
	if (this->nbContacts == MAX_CONTACTS)
	{
		this->nbContacts2 = this->nbContacts;
		this->nbContacts = 0;
	}
}

static void	printContact(std::string str)
{
	if (str.length() > 10)
		std::cout << std::setw(9) << str.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << str << "|";
}

void PhoneBook::searchContact(void)
{
	if (this->nbContacts == 0 && this->repertory[0].getFirstName().empty())
	{
		std::cout << "No contact to display" << std::endl;
		return ;
	}
	std::cout << "  INDEX   |FIRST NAME|   NAME   | NICKNAME |" << std::endl;
	for (int i = 0; i < MAX_CONTACTS; i++)
	{
		if (this->repertory[i].getFirstName().empty())
			continue ;
		std::cout << std::setw(5) << i + 1 << std::setw(6) <<  "|";
		printContact(this->repertory[i].getFirstName());
		printContact(this->repertory[i].getLastName());
		printContact(this->repertory[i].getNickName());
		std::cout << std::endl;
	}
	std::cout << "Enter the index of the contact you want to display: ";
	std::string index;
	std::getline(std::cin, index);
	if (index.empty())
	{
		std::cout << "Index cannot be empty" << std::endl;
		return ;
	}
	if (index.length() > 1 || index[0] < '1' || index[0] > '8')
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	int i = index[0] - '0';
	if (i > this->nbContacts2)
	{
		std::cout << "No contact at this index" << std::endl;
		return ;
	}
	std::cout << "First name: " << this->repertory[i - 1].getFirstName() << std::endl;
	std::cout << "Last name: " << this->repertory[i - 1].getLastName() << std::endl;
	std::cout << "Nickname: " << this->repertory[i - 1].getNickName() << std::endl;
	std::cout << "Phone number: " << this->repertory[i - 1].getPhoneNumber() << std::endl;
	std::cout << "DarkestSecret: " << this->repertory[i - 1].getDarkestSecret() << std::endl;
}

int	main(void)
{
	PhoneBook	PhoneBook;
	std::string	command;

	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, command);
		if (allupper(command) == "ADD")
			PhoneBook.addContact();
		else if (allupper(command) == "SEARCH")
			PhoneBook.searchContact();
		else if (allupper(command) == "EXIT")
			break ;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}
