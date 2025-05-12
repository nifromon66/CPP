/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 06:43:07 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/12 21:46:35 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.class.hpp"

///////////////////////////////////////////////// Constructor / Destructor

ClapTrap::ClapTrap() :
	_type("ClapTrap"),
	_name(""),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << BLACK_ON_GREEN "ClapTrap default constructor called." RESET << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) :
	_type("ClapTrap"),
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << BLACK_ON_PURPLE "ClapTrap parametric constructor called." RESET << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & source) {
	std::cout << BLACK_ON_CYAN "ClapTrap copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

ClapTrap::~ClapTrap() {
	std::cout << BLACK_ON_RED "ClapTrap default destructor called." RESET << std::endl;
	return ;
}

///////////////////////////////////////////////// Public member functions

std::string	ClapTrap::getType(void) const {
	return (_type);
}

std::string	ClapTrap::getName(void) const {
	return (_name);
}

int	ClapTrap::getHitPoints(void) const {
	return (_hitPoints);
}

int	ClapTrap::getEnergyPoints(void) const {
	return (_energyPoints);
}

int	ClapTrap::getAttackDamage(void) const {
	return (_attackDamage);
}

void	ClapTrap::setType(std::string newType) {
	this->_type = newType;
	return ;
}

void	ClapTrap::setName(std::string newName) {
	this->_name = newName;
	return;
}

void	ClapTrap::setHitPoints(int newHitPoints) {
	this->_hitPoints = newHitPoints;
	return ;
}

void	ClapTrap::setEnergyPoints(int newEnergyPoints) {
	this->_energyPoints = newEnergyPoints;
	return ;
}

void	ClapTrap::setAttackDamage(int newAttackDamage) {
	this->_attackDamage = newAttackDamage;
	return ;
}

void	ClapTrap::attack(std::string const & target) {
	if (_energyPoints == 0) {
		std::cout	<< _type << " " << _name
					<< " doesn't have enough energy points"
					<< " to attack."
					<< std::endl;
		return ;
	}
	std::cout	<< _type << " " << _name
				<< " attacks " << target
				<< " causing " << _attackDamage
				<< " points of damage."
				<< std::endl;
	_energyPoints -= 1;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout	<< _type << " " << _name
				<< " take " << amount
				<< " points of damage."
				<< std::endl;
	_hitPoints -= amount;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints == 0) {
		std::cout	<< _type << " " << _name
					<< " doesn't have enough energy points"
					<< " to be repaired."
					<< std::endl;
		return ;
	}
	std::cout	<< _type << " " << _name
				<< " recover " << amount
				<< " hit points."
				<< std::endl;
	_hitPoints += amount;
	_energyPoints -= 1;
	return ;
}


///////////////////////////////////////////////// Operator overloads

ClapTrap &	ClapTrap::operator=(ClapTrap const & source) {
	std::cout << BLACK_ON_WHITE "ClapTrap assigment operator called." RESET << std::endl;
	if (this != &source)
	{
		this->_name = source._name;
		this->_hitPoints = source._hitPoints;
		this->_energyPoints = source._energyPoints;
		this->_attackDamage = source._attackDamage;
	}
	return (*this);
}

std::ostream &	operator<<(std::ostream & out, ClapTrap const & in) {
	out	<< std::endl
		<< "========== " << in.getType() << ": [ " << in.getName() << " ] ==========" << std::endl << std::endl
		<< "Hit Points -> [ " << in.getHitPoints() << " ]." << std::endl
		<< "Energy Points -> [ " << in.getEnergyPoints() << " ]." << std::endl
		<< "Attack Damage -> [ " << in.getAttackDamage() << " ]." << std::endl
		<< std::endl;
	return (out);
}