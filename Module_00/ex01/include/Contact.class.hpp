/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 00:59:15 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/08 21:43:01 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>
# include <limits>
# include <cstdlib>
# include "Colors.hpp"

class Contact {
	public:
						Contact();
						~Contact();
			void		createContact(void);
			void		printContact(void) const;
			std::string	getFirstName(void) const;
			std::string	getLastName(void) const;
			std::string getNickName(void) const;
			std::string getPhoneNumber(void) const;
			std::string getDarkestSecret(void) const;
	private:
			std::string	_firstName;
			std::string _lastName;
			std::string	_nickName;
			std::string	_phoneNumber;
			std::string	_darkestSecret;
			std::string	_PromptInfo(std::string prompt);
};

#endif