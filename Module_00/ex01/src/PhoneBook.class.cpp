/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 02:41:59 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/08 04:11:56 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) :
	_nbrContactsAdded(0)
{
	std::cout << MAGENTA "PhoneBook constructor called." RESET << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void) {
	std::cout << MAGENTA "PhoneBook destructor called." RESET << std::endl;
	return ;
}

std::string	PhoneBook::_formatContactInfo(const std::string info) const {
	if (info.length() > 10)
		return (info.substr(0, 9) + '.');
	return (std::string(10 - info.length(), ' ') + info);
}

void	PhoneBook::_printSavedContact(const Contact contact, int index) const {
	std::cout << "| " << index << " | ";
	std::cout << _formatContactInfo(contact.getFirstName()) << " | ";
	std::cout << _formatContactInfo(contact.getLastName()) << " | ";
	std::cout << _formatContactInfo(contact.getNickName()) << " | ";
	std::cout << std::endl;
	return ;
}

void	PhoneBook::add(void) {
	Contact	contact;
	int		current(_nbrContactsAdded % 8);

	if (_nbrContactsAdded > 7)
		_contacts[current] = contact;
	_contacts[current].createContact();
	_nbrContactsAdded++;
	return ;
}

void	PhoneBook::search(void) {
	int	i(-1);
	int	input(0);

	if (!_nbrContactsAdded) {
		std::cout << RED "Your Phone Book is empty !" RESET << std::endl;
		return ;
	}
	std::cout << std::endl << "Your Phone Book :" << std::endl;
	while (++i < _nbrContactsAdded && i < 8)
		_printSavedContact(_contacts[i], i + 1);
	std::cout << "Which contact do you want to display :" << std::endl;
	while (input < 1 || input > 8 || input > _nbrContactsAdded) {
		std::cin >> input;
		if (std::cin.eof()) {
			std::cout << CYAN "EOF detected. Exiting program." RESET << std::endl;
			exit(0);
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
		if (input < 1 || input > 8 || input > _nbrContactsAdded)
			std::cout << RED "Out of bounds index. Please try again :" RESET << std::endl;
	}
	_contacts[input - 1].printContact();
	return ;
}
