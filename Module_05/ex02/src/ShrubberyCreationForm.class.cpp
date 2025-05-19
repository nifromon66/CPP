/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 09:58:30 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/19 10:52:34 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.class.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default") {
	std::cout << BLACK_ON_GREEN "ShrubberyCreationForm parametric constructor called." RESET << std::endl;
	std::cout	<< RED "Warning: target set as default : " << std::endl
				<< "Target : 'Default' ." RESET << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	std::cout << BLACK_ON_PURPLE "ShrubberyCreationForm parametric constructor called." RESET << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & source) : AForm(source), _target(source._target) {
	std::cout << BLACK_ON_CYAN "ShrubberyCreationForm copy constructor called." RESET << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << BLACK_ON_RED "ShrubberyCreationForm default destructor called." RESET << std::endl;
	return ;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	
	checkAutority(executor);
	
	std::string		fileName(_target + "_shrubbery");
	std::ofstream	file(fileName.c_str());
	
	if (!file)
		throw std::runtime_error("Could not open file : " + fileName);
	file	<< "     /\\\n"
			<< "    /\\*\\\n"
			<< "   /*/\\/\\\n"
			<< "  /\\0\\/\\*\\\n"
			<< " /\\*\\/\\*\\/\\\n"
			<< "/\\0\\/\\/*/\\/\\\n"
			<< "     ||\n"
			<< "     ||\n"
			<< "     ||\n";
	file.close();
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & source) {
	std::cout << BLACK_ON_WHITE "ShrubberyCreationForm assignment operator called." RESET << std::endl;
	if (this != &source) {
		*this = source;
		_target = source._target;
	}
	return (*this);
}


std::ostream & operator<<(std::ostream & out, ShrubberyCreationForm & in) {
	(void)in;
	out << "ShrubberyCreationForm instance" << std::endl;
	return out;
}
