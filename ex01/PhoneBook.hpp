/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:48:15 by luide-so          #+#    #+#             */
/*   Updated: 2023/11/22 16:04:05 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define CLEAR "\033[2J\033[H"
# define TITLE "\033[2J\033[H\033[33m**********************************\n*"
# define END_TITLE "*\n**********************************\033[0m\n\n"
# define MAX_CONTACTS 8

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void add(void);
		void search(void);

	private:
		int		_id;
		Contact	_contacts[MAX_CONTACTS];
		void	_printTable(void);
};

#endif
