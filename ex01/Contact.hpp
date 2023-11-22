/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:48:44 by luide-so          #+#    #+#             */
/*   Updated: 2023/11/22 14:30:29 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);
		Contact(std::string firstName, std::string lastName, std::string nickname, std::string phone, std::string secret);
		void				displayContact(void);
		std::string			getFirstName(void);
		std::string			getLastName(void);
		std::string			getNickname(void);
		static std::string	formatWidth(std::string field);

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phone;
		std::string	_secret;
};

#endif
