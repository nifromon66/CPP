/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 23:51:31 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/19 10:15:49 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.class.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {
    std::cout	<< BLACK_ON_GREEN "Bureaucrat default constructor called." RESET << std::endl;
    std::cout	<< RED "Warning: name and grade of Bureaucrat set as default : " << std::endl
				<< "Name : 'Default' ." << std::endl
				<< "Grade : '150' ." RESET << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade) {
    std::cout << BLACK_ON_PURPLE "Bureaucrate parametric constructor called." RESET << std::endl;
    if (grade < 1)
		throw _GradeTooHighException();
	else if (grade > 150)
		throw _GradeTooLowException();
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & source) : _name("Default") {
	std::cout << BLACK_ON_CYAN "Bureaucrat copy constructor called." RESET << std::endl;
	*this = source;
	std::cout	<< RED "Warning: Unable to copy name: set as 'Default'" RESET << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat() {
	 std::cout << BLACK_ON_RED "Default default destructor called." RESET << std::endl;
	 return ;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & source) {
	if (this != &source) {
		_grade = source._grade;
		if (_grade < 1)
			throw _GradeTooHighException();
		else if (_grade > 150)
			throw _GradeTooLowException();
	}
	return (*this);
}

const std::string &	Bureaucrat::getName(void) const {
	return (_name);
}

int const &	Bureaucrat::getGrade(void) const {
	return (_grade);
}

void	Bureaucrat::upGrade(void) {
	if (--_grade < 1)
		throw _GradeTooHighException();
}

void	Bureaucrat::downGrade(void) {
	if (++_grade > 150)
		throw _GradeTooLowException();
}

void	Bureaucrat::signForm(AForm & form) const {
	try {
		form.beSigned(*this);
		std::cout	<< GREEN << *this << "signed " << form << " ." RESET << std::endl;
	}
	catch(const std::exception & e) {
		std::cerr	<< RED << *this << "Couldn't sign " << form << " because " << e.what() << RESET << std::endl;
	}
	return ;
}

void	Bureaucrat::executeForm(AForm & form) const {
	try {
		form.execute(*this);
		std::cout	<< GREEN << *this << "executed " << form << " ." RESET << std::endl;
	}
	catch(const std::exception & e) {
		std::cerr	<< RED << *this << "Couldn't execute " << form << " because " << e.what() << RESET << std::endl;
	}
	return ;
}

const char *	Bureaucrat::_GradeTooHighException::what() const throw() {
	return ("Grade too high !");
}

const char *	Bureaucrat::_GradeTooLowException::what() const throw() {
	return ("Grade too Low !");
}

std::ostream &	operator<<(std::ostream & out, Bureaucrat const & in) {
	out	<< in.getName() << ", bureaucrat grade " << in.getGrade() << " ." << std::endl;
	return (out);
}
