/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 23:01:16 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/12 23:27:57 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.class.hpp"

///////////////////////////////////////////////// Constructor / Destructor

DiamondTrap::DiamondTrap() : _name("") {
	std::cout << BLACK_ON_GREEN "DiamondTrap default constructor called." RESET << std::endl;
	this->setType("DiamondTrap");
	this->setName("_clap_name");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(30);
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name) {
	std::cout << BLACK_ON_PURPLE "DiamondTrap parametric constructor called." RESET << std::endl;
	this->setType("DiamondTrap");
	this->setName(name + "_clap_name");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(30);
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & source) : ClapTrap(source), ScavTrap(source), FragTrap(source) {
	std::cout << BLACK_ON_CYAN "DiamondTrap copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

DiamondTrap::~DiamondTrap() {
	std::cout << BLACK_ON_RED "DiamondTrap default destructor called." RESET << std::endl;
	return ;
}

///////////////////////////////////////////////// Public member functions

void	DiamondTrap::whoAmI(void) {
	std::cout	<< "My DiamondTrap name is " << _name
				<< " And my ClapTrap name is " << this->getName()
				<< std::endl;
	return ;
}

///////////////////////////////////////////////// Operator overloads

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & source) {
	std::cout << BLACK_ON_WHITE "DiamondTrap assigment operator called." RESET << std::endl;
	if (this != &source)
	{
		this->setType(source.getType());
		this->_name = source._name;
		this->setName(source.getName());
		this->setHitPoints(source.getHitPoints());
		this->setEnergyPoints(source.getEnergyPoints());
		this->setAttackDamage(source.getAttackDamage());
	}
	return (*this);
}