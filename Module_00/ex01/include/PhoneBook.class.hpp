/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 01:49:48 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/08 04:32:31 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <string>
# include <limits>
# include <cstdlib>
# include "Colors.hpp"
# include "Contact.class.hpp"

class	PhoneBook {
	public:
						PhoneBook(void);
						~PhoneBook(void);
			void		add(void);
			void		search(void);
	private:
			Contact		_contacts[8];
			int			_nbrContactsAdded;
			void		_printSavedContact(const Contact contact, int index) const;
			std::string	_formatContactInfo(const std::string info) const;
};

#endif