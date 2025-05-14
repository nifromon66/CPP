/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.abstract.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 09:46:35 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 11:31:22 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.abstract.hpp"

///////////////////////////////////////////////// Constructor / Destructor

AMateria::AMateria() : _type("") {
	std::cout << BLACK_ON_GREEN "AMateria default constructor called." RESET << std::endl;
	return ;
}

AMateria::AMateria(std::string const & type) : _type(type) {
	std::cout << BLACK_ON_PURPLE "AMateria parametric constructor called." RESET << std::endl;
	return ;
}

AMateria::AMateria(AMateria const & source) {
	std::cout << BLACK_ON_CYAN "AMateria copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

AMateria::~AMateria() {
	 std::cout << BLACK_ON_RED "AMateria default destructor called." RESET << std::endl;
	 return ;
}

///////////////////////////////////////////////// Public member functions

std::string const &	AMateria::getType(void) const {
	return (_type);
}

void	AMateria::use(ICharacter & target) {
	(void)target;
	return ;
}

///////////////////////////////////////////////// Operator overloads

AMateria &	AMateria::operator=(AMateria const & source) {
	(void)source;
	std::cout << BLACK_ON_WHITE "AMateria assigment operator called." RESET << std::endl;
	return (*this);
}

std::ostream &	operator<<(std::ostream & out, AMateria const & in) {
	out << in.getType();
	return (out);
}