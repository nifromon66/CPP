/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.abstract.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 07:53:54 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/19 08:29:01 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.abstract.hpp"

AForm::AForm(void) : _name("Default"), _signGrade(150), _execGrade(150), _signed(false) {
	std::cout << BLACK_ON_GREEN "AForm default constructor called." RESET << std::endl;
	std::cout	<< RED "Warning: name, signGrade and execGrade set as default : " << std::endl
				<< "Name : 'Default' ." << std::endl
				<< "SignGrade : '150' ." << std::endl 
				<< "ExecGrade : '150' ." RESET << std::endl;
	 return ;
}

AForm::AForm(std::string const & name, int SignGrade, int ExecGrade) : _name(name), _signGrade(SignGrade), _execGrade(ExecGrade), _signed(false) {
	std::cout << BLACK_ON_PURPLE "AForm parametric constructor called." RESET << std::endl;
	if (_signGrade < 1 || _execGrade < 1)
		throw GradeTooHighException();
	else if (_signGrade > 150 || _execGrade > 150)
		throw GradeTooLowException();
	return ;
}

AForm::AForm(AForm const & source) : _name(source._name), _signGrade(source._signGrade), _execGrade(source._execGrade), _signed(source._signed) {
	std::cout << BLACK_ON_CYAN "AForm copy constructor called." RESET << std::endl;
	return ;
}

AForm::~AForm(void) {
	std::cout << BLACK_ON_RED "AForm default destructor called." RESET << std::endl;
	return ;
}

AForm & AForm::operator=(AForm const & source) {
	std::cout << BLACK_ON_WHITE "AForm assignment operator called." RESET << std::endl;
	if (this != &source) {
		_signed = source._signed;
	}
	return *this;
}

std::string const & AForm::getName(void) const {
	return (_name);
}

int	const & AForm::getSignGrade(void) const {
	return (_signGrade);
}

int	const & AForm::getExecGrade(void) const {
	return (_execGrade);
}

bool const & AForm::getSigned(void) const {
	return (_signed);
}

void AForm::beSigned(Bureaucrat const & employee) {
	if (employee.getGrade() > _signGrade)
		throw GradeTooLowException();
	_signed = true;
	return ;
}

void	AForm::checkAutority(Bureaucrat const & executor) const {
	if (!getSigned())
		throw NotSignedException();
	if (executor.getGrade() > getExecGrade())
		throw GradeTooLowException();
	return ;
}

const char	*AForm::GradeTooHighException::what() const throw() {
	return ("AForm: Grade too High !");
}

const char	*AForm::GradeTooLowException::what() const throw() {
	return ("AForm: Grade too Low !");
}

const char* AForm::NotSignedException::what() const throw()
{
	return ("AForm not signed!");
}

std::ostream & operator<<(std::ostream & out, AForm & in) {
	out	<<	"AForm: " << in.getName()
		<< ", grade to sign : " << in.getSignGrade()
		<< ", grade to execute : " << in.getExecGrade();
	if (in.getSigned())
		out << ", " GREEN "is signed." RESET;
	else
		out << ", " RED "is not signed." RESET;
	return out;
}
