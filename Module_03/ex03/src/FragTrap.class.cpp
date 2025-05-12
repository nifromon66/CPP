/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 22:38:55 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/12 22:45:30 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.class.hpp"

///////////////////////////////////////////////// Constructor / Destructor

FragTrap::FragTrap() {
	std::cout << BLACK_ON_GREEN "FragTrap default constructor called." RESET << std::endl;
	this->setType("FragTrap");
	this->setName("");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	return ;
}

FragTrap::FragTrap(std::string name) {
	std::cout << BLACK_ON_PURPLE "FragTrap parametric constructor called." RESET << std::endl;
	this->setType("FragTrap");
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	return ;
}

FragTrap::FragTrap(FragTrap const & source) : ClapTrap(source) {
	std::cout << BLACK_ON_CYAN "FragTrap copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

FragTrap::~FragTrap() {
	std::cout << BLACK_ON_RED "FragTrap default destructor called." RESET << std::endl;
	return ;
}

///////////////////////////////////////////////// Public member functions

void	FragTrap::highFiveGuys(void) {
	std::cout	<< "FragTrap : " << this->getName()
				<< " propose a high five."
				<< std::endl;
	return ;
}

///////////////////////////////////////////////// Operator overloads

FragTrap &	FragTrap::operator=(FragTrap const & source) {
	std::cout << BLACK_ON_WHITE "FragTrap assigment operator called." RESET << std::endl;
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