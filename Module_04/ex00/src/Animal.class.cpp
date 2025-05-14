/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 00:45:21 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 02:12:06 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.class.hpp"

///////////////////////////////////////////////// Constructor / Destructor

Animal::Animal() : type_("Animal") {
	std::cout << BLACK_ON_GREEN "Animal default constructor called." RESET << std::endl;
	return ;
}

Animal::Animal(Animal const & source) {
	std::cout << BLACK_ON_CYAN "Animal copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

Animal::Animal(std::string type) : type_(type) {
	std::cout << BLACK_ON_PURPLE "Animal parametric constructor called." RESET << std::endl;
	return ;
}

Animal::~Animal() {
    std::cout << BLACK_ON_RED "Animal default destructor called." RESET << std::endl;
	return ;
}

///////////////////////////////////////////////// Public member functions

std::string	Animal::getType(void) const {
	return (type_);
}

void	Animal::makeSound(void) const {
	std::cout << "Animal !" << std::endl;
	return ;
}

///////////////////////////////////////////////// Operator overloads

Animal &	Animal::operator=(Animal const & source) {
	std::cout << BLACK_ON_WHITE "Animal assigment operator called." RESET << std::endl;
	if (this != &source) {
		type_ = source.type_;
	}
	return (*this);
}

std::ostream &	operator<<(std::ostream & out, Animal const & in) {
	out	<< "I'm a " << in.getType() << std::endl;
	return (out);
}