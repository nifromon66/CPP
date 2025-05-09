/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:38:58 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/09 00:23:26 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.class.hpp"

HumanA::HumanA(std::string name, Weapon & weapon) :
	_weapon(weapon),
	_name(name)
{
	std::cout << BLACK_ON_GREEN "HumanA constructor called." RESET << std::endl;
	return ;
}

HumanA::~HumanA() {
	std::cout << BLACK_ON_RED "HumanA destructor called." RESET << std::endl;
	return ;
}

Weapon const &	HumanA::getWeapon(void) const {
	return (_weapon);
}

std::string	HumanA::getName(void) const {
	return (_name);
}

void	HumanA::setName(std::string & newName) {
	_name = newName;
	return ;
}

void	HumanA::setWeapon(Weapon & newWeapon) {
	_weapon = newWeapon;
	return ;
}

void	HumanA::attack() const {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
	return ;
}