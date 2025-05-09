/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:13:59 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/08 23:37:59 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.class.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	std::cout << BLACK_ON_GREEN "Weapon constructor called." RESET << std::endl;
	return ;
}

Weapon::~Weapon() {
	std::cout << BLACK_ON_RED "Weapon destructor called." RESET << std::endl;
	return ;
}

std::string const &	Weapon::getType(void) const {
	return (_type);
}

void	Weapon::setType(std::string newType) {
	_type = newType;
	return ;
}

