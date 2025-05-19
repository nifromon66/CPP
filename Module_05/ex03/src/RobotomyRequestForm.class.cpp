/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:26:41 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/19 10:51:34 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.class.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 145, 137), _target("Default") {
	std::cout << BLACK_ON_GREEN "RobotomyRequestForm parametric constructor called." RESET << std::endl;
	std::cout	<< RED "Warning: target set as default : " << std::endl
				<< "Target : 'Default' ." RESET << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : AForm("RobotomyRequestForm", 145, 137), _target(target) {
	std::cout << BLACK_ON_PURPLE "RobotomyRequestForm parametric constructor called." RESET << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & source) : AForm(source), _target(source._target) {
	std::cout << BLACK_ON_CYAN "RobotomyRequestForm copy constructor called." RESET << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << BLACK_ON_RED "RobotomyRequestForm default destructor called." RESET << std::endl;
	return ;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	
	checkAutority(executor);
	
	static int r = 0;
	if (!r)
	{
		r = 1;
		srand(time(NULL));
	}
	std::cout << "* drilling noise *" << std::endl;
	int value = rand();
	if (value % 2)
		std::cout << "The robotomy has failed." << std::endl;
	else
		std::cout << _target << " has been robotomized successfuly." << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & source) {
	std::cout << BLACK_ON_WHITE "RobotomyRequestForm assignment operator called." RESET << std::endl;
	if (this != &source) {
		*this = source;
		_target = source._target;
	}
	return (*this);
}


std::ostream & operator<<(std::ostream & out, RobotomyRequestForm & in) {
	(void)in;
	out << "RobotomyRequestForm instance" << std::endl;
	return out;
}
