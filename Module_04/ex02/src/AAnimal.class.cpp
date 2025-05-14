/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 00:45:21 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 05:21:26 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.class.hpp"

///////////////////////////////////////////////// Constructor / Destructor

AAnimal::AAnimal() : type_("AAnimal") {
	std::cout << BLACK_ON_GREEN "AAnimal default constructor called." RESET << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const & source) {
	std::cout << BLACK_ON_CYAN "AAnimal copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

AAnimal::AAnimal(std::string type) : type_(type) {
	std::cout << BLACK_ON_PURPLE "AAnimal parametric constructor called." RESET << std::endl;
	return ;
}

AAnimal::~AAnimal() {
    std::cout << BLACK_ON_RED "AAnimal default destructor called." RESET << std::endl;
	return ;
}

///////////////////////////////////////////////// Public member functions

std::string	AAnimal::getType(void) const {
	return (type_);
}

void	AAnimal::makeSound(void) const {
	std::cout << "AAnimal !" << std::endl;
	return ;
}

///////////////////////////////////////////////// Operator overloads

AAnimal &	AAnimal::operator=(AAnimal const & source) {
	std::cout << BLACK_ON_WHITE "AAnimal assigment operator called." RESET << std::endl;
	if (this != &source) {
		type_ = source.type_;
	}
	return (*this);
}

std::ostream &	operator<<(std::ostream & out, AAnimal const & in) {
	out	<< "I'm an " << in.getType() << std::endl;
	return (out);
}