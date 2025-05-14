/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 09:15:03 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 11:00:42 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.class.hpp"

///////////////////////////////////////////////// Constructor / Destructor

MateriaSource::MateriaSource() {
	std::cout << BLACK_ON_GREEN "MateriaSource default constructor called." RESET << std::endl;
	for (int i = 0; i < 4; ++i) {
		_container[i] = NULL;
	}
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & source) {
	std::cout << BLACK_ON_CYAN "MateriaSource copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

MateriaSource::~MateriaSource() {
	std::cout << BLACK_ON_RED "MateriaSource default destructor called." RESET << std::endl;
	for (int i = 0; i < 4; ++i) {
		if (_container[i])
			delete _container[i];
	}
	return ;
}

///////////////////////////////////////////////// Public member functions

AMateria	*(&MateriaSource::getContainer(void))[4] {
	return (_container);
}

void	MateriaSource::learnMateria(AMateria *toLearn) {
	if (!toLearn)
		return ;
	for (int i = 0; i < 4; ++i) {
		if (!_container[i]) {
			_container[i] = toLearn->clone();
			return ;
		}
	}
	return ;
}

AMateria	*MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; ++i) {
		if (_container[i] && _container[i]->getType() == type)
			return (_container[i]->clone());
	}
	return (NULL);
}

///////////////////////////////////////////////// Operator overloads

MateriaSource &	MateriaSource::operator=(MateriaSource const & source) {
	std::cout << BLACK_ON_WHITE "MateriaSource assigment operator called." RESET << std::endl;
	if (this != &source) {
		for (int i = 0; i < 4; ++i) {
			if (_container[i]) {
				delete _container[i];
				_container[i] = NULL;
			}
			if (source._container[i])
				_container[i] = source._container[i];
		}
	}
	return (*this);
}

std::ostream &	operator<<(std::ostream & out, MateriaSource & in) {
	for (int i = 0; i < 4; ++i) {
		if (in.getContainer()[i])
			out << in.getContainer()[i] << std::endl;
	}
	return (out);
}