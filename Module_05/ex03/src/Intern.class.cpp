/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:50:53 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/19 11:35:20 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.class.hpp"

Intern::Intern(void) {
	std::cout << BLACK_ON_GREEN "Intern default constructor called." RESET << std::endl;
	return ;
}

Intern::Intern(Intern const & source) {
	std::cout << BLACK_ON_CYAN "Intern copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

Intern::~Intern(void) {
	std::cout << BLACK_ON_RED "Intern default destructor called." RESET << std::endl;
	return ;
}

Intern & Intern::operator=(Intern const & source) {
	(void)source;
	std::cout << BLACK_ON_WHITE "Intern assignment operator called." RESET << std::endl;
	return (*this);
}

AForm	*Intern::makeForm(std::string const & name, std::string const & target) {
	if (name != ROBOTOMY && name != PRESIDENTIAL && name != SHRUBBERY) {
		std::cerr << "Intern couldn't find the form " << name << "." << std::endl;
		throw std::invalid_argument("Unknown form name");
	}
	typedef AForm* (*PrintingMachine)(std::string const &);

	const std::string names[3] = { ROBOTOMY, PRESIDENTIAL, SHRUBBERY };

	PrintingMachine printer[3] = { _createRobotomy, _createPresidential, _createShrubbery};

	for (int i = 0; i < 3; i++) {
		if (name == names[i]) {
			std::cout << "Intern creates " << name << std::endl;
			return (printer[i](target));
		}
	}
	return (NULL);
}

AForm	*Intern::_createShrubbery(std::string const & target) {
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::_createRobotomy(std::string const & target) {
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::_createPresidential(std::string const & target) {
	return (new PresidentialPardonForm(target));
}


std::ostream & operator<<(std::ostream & out, Intern & in) {
	(void)in;
	out << "Intern instance" << std::endl;
	return out;
}
