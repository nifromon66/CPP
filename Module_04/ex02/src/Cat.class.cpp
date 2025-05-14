/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 01:24:57 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 05:24:44 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.class.hpp"

///////////////////////////////////////////////// Constructor / Destructor

Cat::Cat() : AAnimal("Cat") {
	std::cout << BLACK_ON_GREEN "Cat default constructor called." RESET << std::endl;
	_brain = new Brain();
	_brain->addIdea("Sleep! Sleep! Sleep!", 0);
	return ;
}

Cat::Cat(Cat const & source) : AAnimal(source) {
	std::cout << BLACK_ON_CYAN "Cat copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

Cat::~Cat() {
	std::cout << BLACK_ON_RED "Cat default destructor called." RESET << std::endl;
	delete _brain;
	return ;
}

///////////////////////////////////////////////// Public member functions

Brain	*Cat::getBrain(void) const {
	return (_brain);
}

void	Cat::makeSound(void) const {
	std::cout   << "Meow !" << std::endl;
	return ;
}

///////////////////////////////////////////////// Operator overloads

Cat &	Cat::operator=(Cat const & source) {
	std::cout << BLACK_ON_WHITE "Cat assigment operator called." RESET << std::endl;
	if (this != &source) {
		type_ = source.type_;
		_brain = source._brain;
	}
	return (*this);
}

std::ostream &	operator<<(std::ostream & out, Cat const & in) {
	out	<< "I'm a " << in.getType() << std::endl
		<< "And here are my ideas :" << std::endl
		<< *(in.getBrain()) << std::endl;
	return (out);
}