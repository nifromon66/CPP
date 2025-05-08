/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 02:42:29 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/08 04:37:15 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.class.hpp"
#include "../include/Contact.class.hpp"
#include "../include/Colors.hpp"

void	firstMessage(void) {
	std::cout << YELLOW "Welcome to your Phone Book !" << std::endl;
	std::cout << "Enter 'ADD' to create a new contact." << std::endl;
	std::cout << "Enter 'SEARCH' to see your contact list." << std::endl;
	std::cout << "Enter 'EXIT' to exit your Phone Book." RESET << std::endl;
	std::cout << std::endl;
	return ;
}

int	main(void)
{
	PhoneBook	phone_book;
	std::string	input;

	firstMessage();
	while (1) {
		std::getline(std::cin, input);
		if (std::cin.eof()) {
			std::cout << CYAN "EOF detected. Exiting program." RESET << std::endl;
			exit(0);
		}
		if (input == "ADD")
			phone_book.add();
		else if (input == "SEARCH")
			phone_book.search();
		else if (input == "EXIT")
			exit(0);
		else
			std::cout << RED "Incorrect entry. Please try again :" RESET << std::endl;
	}
	return (0);
}