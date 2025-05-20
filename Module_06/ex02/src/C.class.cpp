/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.class.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 07:04:05 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/20 07:04:14 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/C.class.hpp"

C::C(void) {
	std::cout << BLACK_ON_GREEN "C default constructor called." RESET << std::endl;
	 return ;
}

C::C(C const & source) {
	std::cout << BLACK_ON_CYAN "C copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

C::~C(void) {
	std::cout << BLACK_ON_RED "C default destructor called." RESET << std::endl;
	return ;
}

C & C::operator=(C const & source) {
	(void)source;
	std::cout << BLACK_ON_WHITE "C assignment operator called." RESET << std::endl;
	return *this;
}


std::ostream & operator<<(std::ostream & out, C & in) {
	(void)in;
	out << "C instance" << std::endl;
	return out;
}
