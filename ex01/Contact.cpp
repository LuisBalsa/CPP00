/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:48:49 by luide-so          #+#    #+#             */
/*   Updated: 2023/11/22 16:33:16 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

Contact::Contact(std::string firstName, std::string lastName,
	std::string nickname, std::string phone, std::string secret) :
	_firstName(firstName), _lastName(lastName), _nickname(nickname),
	_phone(phone), _secret(secret) {}

void Contact::displayContact(void)
{
	std::cout << TITLE << "           CONTACT INFO         " << END_TITLE;
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone << std::endl;
	std::cout << "Darkest secret: " << this->_secret << std::endl;
	std::cout << "\nPress ENTER to go back." << std::endl;
	std::cin.ignore();
}

std::string	Contact::getFirstName(void)
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void)
{
	return (this->_lastName);
}

std::string	Contact::getNickname(void)
{
	return (this->_nickname);
}

std::string	Contact::formatWidth(std::string field)
{
	if (field.length() > 10)
	{
		field.resize(9);
		field.append(".");
	}
	return (field);
}
