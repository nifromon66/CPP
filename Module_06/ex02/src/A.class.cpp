/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.class.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 07:03:06 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/20 07:03:33 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/A.class.hpp"

A::A(void) {
	std::cout << BLACK_ON_GREEN "A default constructor called." RESET << std::endl;
	 return ;
}

A::A(A const & source) {
	std::cout << BLACK_ON_CYAN "A copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

A::~A(void) {
	std::cout << BLACK_ON_RED "A default destructor called." RESET << std::endl;
	return ;
}

A & A::operator=(A const & source) {
	(void)source;
	std::cout << BLACK_ON_WHITE "A assignment operator called." RESET << std::endl;
	return *this;
}


std::ostream & operator<<(std::ostream & out, A & in) {
	(void)in;
	out << "A instance" << std::endl;
	return out;
}
