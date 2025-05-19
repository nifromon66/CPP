/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 07:53:54 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/19 08:29:01 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.class.hpp"

Form::Form(void) : _name("Default"), _signGrade(150), _execGrade(150), _signed(false) {
	std::cout << BLACK_ON_GREEN "Form default constructor called." RESET << std::endl;
	std::cout	<< RED "Warning: name, signGrade and execgrade set as default : " << std::endl
				<< "Name : 'Default' ." << std::endl
				<< "SignGrade : '150' ." << std::endl 
				<< "ExecGrade : '150' ." RESET << std::endl;
	 return ;
}

Form::Form(std::string const & name, int SignGrade, int ExecGrade) : _name(name), _signGrade(SignGrade), _execGrade(ExecGrade), _signed(false) {
	std::cout << BLACK_ON_PURPLE "Form parametric constructor called." RESET << std::endl;
	if (_signGrade < 1 || _execGrade < 1)
		throw _GradeTooHighException();
	else if (_signGrade > 150 || _execGrade > 150)
		throw _GradeTooLowException();
	return ;
}

Form::Form(Form const & source) : _name(source._name), _signGrade(source._signGrade), _execGrade(source._execGrade), _signed(source._signed) {
	std::cout << BLACK_ON_CYAN "Form copy constructor called." RESET << std::endl;
	return ;
}

Form::~Form(void) {
	std::cout << BLACK_ON_RED "Form default destructor called." RESET << std::endl;
	return ;
}

Form & Form::operator=(Form const & source) {
	std::cout << BLACK_ON_WHITE "Form assignment operator called." RESET << std::endl;
	if (this != &source) {
		_signed = source._signed;
	}
	return *this;
}

std::string const & Form::getName(void) const {
	return (_name);
}

int	const & Form::getSignGrade(void) const {
	return (_signGrade);
}

int	const & Form::getExecGrade(void) const {
	return (_execGrade);
}

bool const & Form::getSigned(void) const {
	return (_signed);
}

void Form::beSigned(Bureaucrat const & employee) {
	if (employee.getGrade() > _signGrade)
		throw _GradeTooLowException();
	_signed = true;
	return ;
}

const char	*Form::_GradeTooHighException::what() const throw() {
	return ("Form: Grade too High !");
}

const char	*Form::_GradeTooLowException::what() const throw() {
	return ("Form: Grade too Low !");
}

std::ostream & operator<<(std::ostream & out, Form & in) {
	out	<<	"Form: " << in.getName()
		<< ", grade to sign : " << in.getSignGrade()
		<< ", grade to execute : " << in.getExecGrade();
	if (in.getSigned())
		out << ", " GREEN "is signed." RESET;
	else
		out << ", " RED "is not signed." RESET;
	return out;
}
