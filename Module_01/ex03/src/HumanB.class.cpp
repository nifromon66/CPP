/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:48:29 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/09 00:23:46 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.class.hpp"

HumanB::HumanB(std::string const & name) : _name(name) {
	std::cout << BLACK_ON_GREEN "HumanB constructor called." RESET << std::endl;
	return ;
}

HumanB::~HumanB() {
	std::cout << BLACK_ON_RED "HumanB destructor called." RESET << std::endl;
	return ;
}

Weapon const &	HumanB::getWeapon(void) const {
	return (*_weapon);
}

std::string	HumanB::getName(void) const {
	return (_name);
}

void	HumanB::setName(std::string & newName) {
	_name = newName;
	return ;
}

void	HumanB::setWeapon(Weapon & newWeapon) {
	_weapon = &newWeapon;
	return ;
}

void	HumanB::attack() const {
	std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
	return ;
}