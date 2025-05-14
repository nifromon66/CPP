/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 01:24:57 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 02:12:00 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.class.hpp"

///////////////////////////////////////////////// Constructor / Destructor

Cat::Cat() : Animal("Cat") {
	std::cout << BLACK_ON_GREEN "Cat default constructor called." RESET << std::endl;
	return ;
}

Cat::Cat(Cat const & source) : Animal(source) {
	std::cout << BLACK_ON_CYAN "Cat copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

Cat::~Cat() {
	std::cout << BLACK_ON_RED "Cat default destructor called." RESET << std::endl;
	return ;
}

///////////////////////////////////////////////// Public member functions

void	Cat::makeSound(void) const {
	std::cout   << "Meow !" << std::endl;
	return ;
}

///////////////////////////////////////////////// Operator overloads

Cat &	Cat::operator=(Cat const & source) {
	std::cout << BLACK_ON_WHITE "Cat assigment operator called." RESET << std::endl;
	if (this != &source) {
		type_ = source.type_;
	}
	return (*this);
}