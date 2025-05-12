/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 20:54:31 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/12 23:17:02 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.class.hpp"

///////////////////////////////////////////////// Constructor / Destructor

ScavTrap::ScavTrap() {
	std::cout << BLACK_ON_GREEN "ScavTrap default constructor called." RESET << std::endl;
	this->setType("ScavTrap");
	this->setName("");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	return ;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << BLACK_ON_PURPLE "ScavTrap parametric constructor called." RESET << std::endl;
	this->setType("ScavTrap");
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & source) : ClapTrap(source) {
	std::cout << BLACK_ON_CYAN "ScavTrap copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

ScavTrap::~ScavTrap() {
	std::cout << BLACK_ON_RED "ScavTrap default destructor called." RESET << std::endl;
	return ;
}

///////////////////////////////////////////////// Public member functions

void	ScavTrap::guardGate(void) {
	std::cout	<< "ScavTrap : " << this->getName()
				<< " is now in Gate keeper mode."
				<< std::endl;
	return ;
}

///////////////////////////////////////////////// Operator overloads

ScavTrap &	ScavTrap::operator=(ScavTrap const & source) {
	std::cout << BLACK_ON_WHITE "ScavTrap assigment operator called." RESET << std::endl;
	if (this != &source)
	{
		this->setType(source.getType());
		this->setName(source.getName());
		this->setHitPoints(source.getHitPoints());
		this->setEnergyPoints(source.getEnergyPoints());
		this->setAttackDamage(source.getAttackDamage());
	}
	return (*this);
}