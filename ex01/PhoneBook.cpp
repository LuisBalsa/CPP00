/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:47:56 by luide-so          #+#    #+#             */
/*   Updated: 2023/11/22 16:50:38 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_id = 0;
}

PhoneBook::~PhoneBook(void) {}

void	PhoneBook::add()
{
	std::string	firstName, lastName, nickname, phone, secret;

	std::cout << TITLE << "           ADD CONTACT          " << END_TITLE;
	std::cout << "Enter first name: ";
	std::getline(std::cin, firstName);
	std::cout << "Enter last name: ";
	std::getline(std::cin, lastName);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, phone);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, secret);

	if (firstName.empty() || lastName.empty() || nickname.empty() || phone.empty() || secret.empty())
	{
		std::cout << "\nContact not added.\nA contact can't have any empty field.\n\n";
		std::cout << "Press ENTER to continue." << std::endl;
		std::cin.ignore();
		return ;
	}
	this->_contacts[this->_id++ % MAX_CONTACTS] = Contact(firstName, lastName, nickname, phone, secret);
	std::cout << "\nContact added successfully.\nPress ENTER to continue." << std::endl;
	std::cin.ignore();
}

void	PhoneBook::_printTable(void)
{
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < MAX_CONTACTS && i < this->_id; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << Contact::formatWidth(this->_contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << Contact::formatWidth(this->_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << Contact::formatWidth(this->_contacts[i].getNickname()) << std::endl;
	}
}

void	PhoneBook::search(void)
{
	std::string	index;

	std::cout << TITLE << "          SEARCH CONTACT        " << END_TITLE;
	if (this->_id == 0)
	{
		std::cout << "No contacts to search for.\nPress ENTER to return." << std::endl;
		std::cin.ignore();
		return ;
	}
	this->_printTable();
	while(1)
	{
		std::cout << "\nEnter an index or press ENTER to return: ";
		std::getline(std::cin, index);
		if (index.empty())
			return ;
		else if (index.length() != 1 || index[0] < '0' || index[0] > '7' || index[0] - '0' >= this->_id)
			std::cout << "Invalid index. Try again.";
		else
		{
			this->_contacts[index[0] - '0'].displayContact();
			std::cout << TITLE << "          SEARCH CONTACT        " << END_TITLE;
			this->_printTable();
		}
	}
}
