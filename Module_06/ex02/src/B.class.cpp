/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.class.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 07:03:45 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/20 07:03:56 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/B.class.hpp"

B::B(void) {
	std::cout << BLACK_ON_GREEN "B default constructor called." RESET << std::endl;
	 return ;
}

B::B(B const & source) {
	std::cout << BLACK_ON_CYAN "B copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

B::~B(void) {
	std::cout << BLACK_ON_RED "B default destructor called." RESET << std::endl;
	return ;
}

B & B::operator=(B const & source) {
	(void)source;
	std::cout << BLACK_ON_WHITE "B assignment operator called." RESET << std::endl;
	return *this;
}


std::ostream & operator<<(std::ostream & out, B & in) {
	(void)in;
	out << "B instance" << std::endl;
	return out;
}
