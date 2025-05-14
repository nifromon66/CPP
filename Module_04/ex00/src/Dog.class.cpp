/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 01:28:10 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 02:12:25 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.class.hpp"

///////////////////////////////////////////////// Constructor / Destructor

Dog::Dog() : Animal("Dog") {
	std::cout << BLACK_ON_GREEN "Dog default constructor called." RESET << std::endl;
	return ;
}

Dog::Dog(Dog const & source) : Animal(source) {
	std::cout << BLACK_ON_CYAN "Dog copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

Dog::~Dog() {
    std::cout << BLACK_ON_RED "Dog default destructor called." RESET << std::endl;
	return ;
}

///////////////////////////////////////////////// Public member functions

void	Dog::makeSound(void) const {
    std::cout   << "Woof !" << std::endl;
	return ;
}

///////////////////////////////////////////////// Operator overloads

Dog &	Dog::operator=(Dog const & source) {
	std::cout << BLACK_ON_WHITE "Dog assigment operator called." RESET << std::endl;
	if (this != &source) {
		type_ = source.type_;
	}
	return (*this);
}