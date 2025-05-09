/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 01:07:48 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/08 21:51:05 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.class.hpp"

Contact::Contact() :
	_firstName(""),
	_lastName(""),
	_nickName(""),
	_phoneNumber(""),
	_darkestSecret("")
{
	std::cout << BLACK_ON_GREEN "Contact constructor called." RESET << std::endl;
	return ;
}

Contact::~Contact() {
	std::cout << BLACK_ON_RED "Contact destructor called." RESET << std::endl;
	return ;
}

std::string Contact::getFirstName(void) const {
	return (_firstName);
}

std::string Contact::getLastName(void) const {
	return (_lastName);
}

std::string Contact::getNickName(void) const {
	return (_nickName);
}

std::string Contact::getPhoneNumber(void) const {
	return (_phoneNumber);
}

std::string Contact::getDarkestSecret(void) const {
	return (_darkestSecret);
}

std::string	Contact::_PromptInfo(std::string prompt)
{
	std::string	input("");

	while (!input.length()) {
		std::cout << "Enter the new contact's " << prompt << " : ";
		std::getline(std::cin, input);
		if (std::cin.eof()) {
			std::cout << CYAN "EOF detected. Exiting program." RESET << std::endl;
			exit(0);
		}
		if (!input.length())
			std::cout << RED "Error: input empty. Please try again." RESET << std::endl;
	}
	return (input);
}

void	Contact::createContact() {
	_firstName = _PromptInfo("First Name");
	_lastName = _PromptInfo("Last Name");
	_nickName = _PromptInfo("Nick Name");
	_phoneNumber = _PromptInfo("Phone Number");
	_darkestSecret = _PromptInfo("Darkest Secret");
	return ;
}

void	Contact::printContact() const {
	std::cout << std::endl;
	std::cout << "First Name :\t\t" << _firstName << std::endl;
	std::cout << "Last Name :\t\t" << _lastName << std::endl;
	std::cout << "Nick Name :\t\t" << _nickName << std::endl;
	std::cout << "Phone Number :\t\t" << _phoneNumber << std::endl;
	std::cout << "Darkest Secret :\t" << _darkestSecret << std::endl;
	std::cout << std::endl;
	return ;
}



