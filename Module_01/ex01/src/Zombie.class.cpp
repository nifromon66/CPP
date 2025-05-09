/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:03:57 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/08 22:17:05 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.class.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << BLACK_ON_GREEN "Zombie: " << name << " constructor called." RESET << std::endl;
	return ;
}

Zombie::Zombie() : _name("") {
	std::cout << BLACK_ON_GREEN  << "Zombie constructor called." RESET << std::endl;
	return ;
}

Zombie::~Zombie() {
	std::cout << BLACK_ON_RED "Zombie: " << _name << " destructor called." RESET << std::endl;
	return ;  
}

std::string	Zombie::getName(void) const {
	return (_name);
}

void	Zombie::setName(std::string name) {
	_name = name;
	return ;
}

void	Zombie::annouce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}