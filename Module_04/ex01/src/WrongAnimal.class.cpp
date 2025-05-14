/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 01:47:20 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 01:51:16 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.class.hpp"

///////////////////////////////////////////////// Constructor / Destructor

WrongAnimal::WrongAnimal() : type_("WrongAnimal") {
	std::cout << BLACK_ON_GREEN "WrongAnimal default constructor called." RESET << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & source) {
	std::cout << BLACK_ON_CYAN "WrongAnimal copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : type_(type) {
	std::cout << BLACK_ON_PURPLE "WrongAnimal parametric constructor called." RESET << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal() {
    std::cout << BLACK_ON_RED "WrongAnimal default destructor called." RESET << std::endl;
	return ;
}

///////////////////////////////////////////////// Public member functions

std::string	WrongAnimal::getType(void) const {
	return (type_);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "Wrong Animal !" << std::endl;
	return ;
}

///////////////////////////////////////////////// Operator overloads

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & source) {
	std::cout << BLACK_ON_WHITE "WrongAnimal assigment operator called." RESET << std::endl;
	if (this != &source) {
		type_ = source.type_;
	}
	return (*this);
}

std::ostream &	operator<<(std::ostream & out, WrongAnimal const & in) {
	out	<< "I'm a " << in.getType() << std::endl;
	return (out);
}