/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 03:10:25 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/10 03:50:35 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.class.hpp"

Fixed::Fixed() : _fixedPoint(0) {
	std::cout << BLACK_ON_GREEN "Fixed default constructor called." RESET << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & source) {
	std::cout << BLACK_ON_CYAN "Fixed copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

Fixed::~Fixed() {
	std::cout << BLACK_ON_RED "Fixed default destructor called." RESET << std::endl;
	return ;
}

Fixed &	Fixed::operator=(Fixed const & source) {
	std::cout << BLACK_ON_WHITE "Fixed assigment operator called." RESET << std::endl;
	if (this != &source)
		this->_fixedPoint = source.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const {
	return (_fixedPoint);
}

void	Fixed::setRawBits(int const raw) {
	_fixedPoint = raw;
	return ;
}




