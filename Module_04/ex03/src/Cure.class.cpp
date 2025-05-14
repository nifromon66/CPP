/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:11:18 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 11:50:56 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.class.hpp"

///////////////////////////////////////////////// Constructor / Destructor

Cure::Cure() : AMateria("cure") {
	std::cout << BLACK_ON_GREEN "Cure default constructor called." RESET << std::endl;
	return ;
}

Cure::Cure(Cure const & source) : AMateria(source) {
	std::cout << BLACK_ON_CYAN "Cure copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

Cure::~Cure() {
	 std::cout << BLACK_ON_RED "Cure default destructor called." RESET << std::endl;
	 return ;
}

///////////////////////////////////////////////// Public member functions

Cure	*Cure::clone(void) const {
	return (new Cure());
}

void	Cure::use(ICharacter & target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}

///////////////////////////////////////////////// Operator overloads
