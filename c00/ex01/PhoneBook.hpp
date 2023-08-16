/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 10:45:43 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/14 12:18:38 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {
public:
	PhoneBook();
	~PhoneBook();
	void addContact(void);
	void searchContact(void);

private:
	static const int MAX_CONTACTS = 8;
	contact repertory[MAX_CONTACTS];
	int nbContacts;
	int nbContacts2;
};

#endif
