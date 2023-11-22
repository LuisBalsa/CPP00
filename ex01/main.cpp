/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:47:17 by luide-so          #+#    #+#             */
/*   Updated: 2023/11/22 16:03:33 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	main_menu(void)
{
	std::cout << TITLE << "           PHONEBOOK            " << END_TITLE;
	std::cout << "Available commands: \n- ADD\n- SEARCH\n- EXIT\n" << std::endl;
}

int		main(void)
{
	std::string	command;
	PhoneBook	phonebook;

	main_menu();
	while (1)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
		else if (command == "EXIT")
			break ;
		else
		{
			std::cout << "Invalid command. Try again." << std::endl;
			continue ;
		}
		main_menu();
	}
	std::cout << CLEAR;
	return (0);
}
