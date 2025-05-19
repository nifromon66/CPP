/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:31:05 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/19 10:52:05 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.class.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 145, 137), _target("Default") {
	std::cout << BLACK_ON_GREEN "PresidentialPardonForm parametric constructor called." RESET << std::endl;
	std::cout	<< RED "Warning: target set as default : " << std::endl
				<< "Target : 'Default' ." RESET << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : AForm("PresidentialPardonForm", 145, 137), _target(target) {
	std::cout << BLACK_ON_PURPLE "PresidentialPardonForm parametric constructor called." RESET << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & source) : AForm(source), _target(source._target) {
	std::cout << BLACK_ON_CYAN "PresidentialPardonForm copy constructor called." RESET << std::endl;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << BLACK_ON_RED "PresidentialPardonForm default destructor called." RESET << std::endl;
	return ;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	
	checkAutority(executor);
	std::cout << _target << " has received pardon by Zaphod Beeblebrox." << std::endl;
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & source) {
	std::cout << BLACK_ON_WHITE "PresidentialPardonForm assignment operator called." RESET << std::endl;
	if (this != &source) {
		*this = source;
		_target = source._target;
	}
	return (*this);
}


std::ostream & operator<<(std::ostream & out, PresidentialPardonForm & in) {
	(void)in;
	out << "PresidentialPardonForm instance" << std::endl;
	return out;
}
