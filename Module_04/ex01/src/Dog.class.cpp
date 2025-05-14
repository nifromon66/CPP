/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 01:28:10 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 04:30:49 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.class.hpp"

///////////////////////////////////////////////// Constructor / Destructor

Dog::Dog() : Animal("Dog") {
	std::cout << BLACK_ON_GREEN "Dog default constructor called." RESET << std::endl;
	_brain = new Brain();
	_brain->addIdea("Play! Play! Play!", 0);
	return ;
}

Dog::Dog(Dog const & source) : Animal(source) {
	std::cout << BLACK_ON_CYAN "Dog copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

Dog::~Dog() {
    std::cout << BLACK_ON_RED "Dog default destructor called." RESET << std::endl;
	delete _brain;
	return ;
}

///////////////////////////////////////////////// Public member functions

Brain	*Dog::getBrain(void) const {
	return (_brain);
}

void	Dog::makeSound(void) const {
    std::cout   << "Woof !" << std::endl;
	return ;
}

///////////////////////////////////////////////// Operator overloads

Dog &	Dog::operator=(Dog const & source) {
	std::cout << BLACK_ON_WHITE "Dog assigment operator called." RESET << std::endl;
	if (this != &source) {
		type_ = source.type_;
		_brain = source._brain;
	}
	return (*this);
}

std::ostream &	operator<<(std::ostream & out, Dog const & in) {
	out	<< "I'm a " << in.getType() << std::endl
		<< "And here are my ideas :" << std::endl
		<< *(in.getBrain()) << std::endl;
	return (out);
}