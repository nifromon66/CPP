/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:20:09 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 11:50:52 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.class.hpp"

///////////////////////////////////////////////// Constructor / Destructor

Ice::Ice() : AMateria("ice") {
	std::cout << BLACK_ON_GREEN "Ice default constructor called." RESET << std::endl;
	return ;
}

Ice::Ice(Ice const & source) : AMateria(source) {
	std::cout << BLACK_ON_CYAN "Ice copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

Ice::~Ice() {
	 std::cout << BLACK_ON_RED "Ice default destructor called." RESET << std::endl;
	 return ;
}

///////////////////////////////////////////////// Public member functions

Ice	*Ice::clone(void) const {
	return (new Ice());
}

void	Ice::use(ICharacter & target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}

///////////////////////////////////////////////// Operator overloads