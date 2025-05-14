/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:35:24 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 11:49:27 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.class.hpp"

///////////////////////////////////////////////// Constructor / Destructor

Character::Character() : _name("") {
	std::cout << BLACK_ON_GREEN "Character default constructor called." RESET << std::endl;
	for (int i = 0; i < 4; ++i) {
		_inventory[i] = NULL;
	}
	return ;
}

Character::Character(std::string const & name) : _name(name) {
	std::cout << BLACK_ON_PURPLE "Character parametric constructor called." RESET << std::endl;
	for (int i = 0; i < 4; ++i) {
		_inventory[i] = NULL;
	}
	return ;
}

Character::Character(Character const & source) {
	std::cout << BLACK_ON_CYAN "Character copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

Character::~Character() {
	std::cout << BLACK_ON_RED "Character default destructor called." RESET << std::endl;
	for (int i = 0; i < 4; ++i) {
		if (_inventory[i])
			delete _inventory[i];
	}
	return ;
}

///////////////////////////////////////////////// Public member functions

std::string const &	Character::getName(void) const {
	return (_name);
}

AMateria	*(&Character::getInventory(void))[4] {
	return (_inventory);
}

void	Character::equip(AMateria *toEquip) {
	if (!toEquip)
		return ;
	for (int i = 0; i < 4; ++i) {
		if (!_inventory[i]) {
			_inventory[i] = toEquip;
			return ;
		}
	}
	return ;
}

void	Character::unequip(int index) {
	if (index < 0 || index > 3)
		return ;
	_inventory[index] = NULL;
	return ;
}

void	Character::use(int index, ICharacter & target) {
	if (index < 0 || index > 3)
		return ;
	_inventory[index]->use(target);
	return ;
}


///////////////////////////////////////////////// Operator overloads

Character &	Character::operator=(Character const & source) {
	std::cout << BLACK_ON_WHITE "Character assigment operator called." RESET << std::endl;
	if (this != &source) {
		_name = source._name;
		for (int i = 0; i < 4; ++i) {
			if (_inventory[i]) {
				delete _inventory[i];
				_inventory[i] = NULL;
			}
			if (source._inventory[i])
				_inventory[i] = source._inventory[i]->clone();
		}
	}
	return (*this);
}

std::ostream &	operator<<(std::ostream & out, Character & in) {
	out << "My name is : " << in.getName() << ". And I have those Materias : " << std::endl;
	for (int i = 0; i < 4; ++i) {
		if (in.getInventory()[i])
			out << in.getInventory()[i] << std::endl;
	}
	return (out);
}