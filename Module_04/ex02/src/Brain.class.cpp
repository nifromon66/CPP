/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 02:32:37 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 04:28:03 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.class.hpp"

///////////////////////////////////////////////// Constructor / Destructor

Brain::Brain() {
	std::cout << BLACK_ON_GREEN "Brain default constructor called." RESET << std::endl;
	for (int i = 0; i < 100; ++i) {
		_ideas[i] = "";
	}
	return ;
}

Brain::Brain(Brain const & source) {
	std::cout << BLACK_ON_CYAN "Brain copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

Brain::~Brain() {
	std::cout << BLACK_ON_RED "Brain default destructor called." RESET << std::endl;
	return ;
}

///////////////////////////////////////////////// Public member functions

std::string	Brain::getIdea(int index) const {
	return (_ideas[index]);
}

void	Brain::setIdeas(std::string newIdeas[100]) {
	for (int i = 0; i < 100; ++i) {
		_ideas[i] = newIdeas[i];
	}
	return ;
}

void	Brain::addIdea(std::string newIdea, int index) {
	if (index < 0 || index > 99) {
		std::cerr << RED "Error: Brain::addIdea: Out of bounds index." << std::endl;
		return ; 
	}
	_ideas[index] = newIdea;
	return ;
}

///////////////////////////////////////////////// Operator overloads

Brain &	Brain::operator=(Brain const & source) {
	std::cout << BLACK_ON_WHITE "Brain assigment operator called." RESET << std::endl;
	if (this != &source) {
		for (int i = 0; i < 100; ++i) {
			_ideas[i] = source._ideas[i];
		}
	}
	return (*this);
}

std::ostream &	operator<<(std::ostream & out, Brain const & in) {
	for (int i = 0; i < 100; ++i) {
		if (in.getIdea(i) != "")
			out << (i + 1) << ": " << in.getIdea(i) << std::endl;
	}
	return (out);
}