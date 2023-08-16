/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 09:49:06 by jsoulet           #+#    #+#             */
/*   Updated: 2023/08/14 10:12:29 by jsoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class contact
{
	private:
			std::string firstName;
			std::string lastName;
			std::string nickName;
			std::string phoneNumber;
			std::string darkestSecret;

	public:
			contact();
			~contact();
			void setFirstName(std::string firstName);
			void setLastName(std::string lastName);
			void setNickName(std::string nickName);
			void setPhoneNumber(std::string phoneNumber);
			void setDarkestSecret(std::string darkestSecret);
			std::string getFirstName(void);
			std::string getLastName(void);
			std::string getNickName(void);
			std::string getPhoneNumber(void);
			std::string getDarkestSecret(void);
};

#endif
