/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 01:50:12 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 01:51:00 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.class.hpp"

///////////////////////////////////////////////// Constructor / Destructor

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << BLACK_ON_GREEN "WrongCat default constructor called." RESET << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const & source) : WrongAnimal(source) {
	std::cout << BLACK_ON_CYAN "WrongCat copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

WrongCat::~WrongCat() {
    std::cout << BLACK_ON_RED "WrongCat default destructor called." RESET << std::endl;
	return ;
}

///////////////////////////////////////////////// Public member functions

void	WrongCat::makeSound(void) const {
    std::cout   << "Wrong Meow !" << std::endl;
	return ;
}

///////////////////////////////////////////////// Operator overloads

WrongCat &	WrongCat::operator=(WrongCat const & source) {
	std::cout << BLACK_ON_WHITE "WrongCat assigment operator called." RESET << std::endl;
	if (this != &source) {
		type_ = source.type_;
	}
	return (*this);
}