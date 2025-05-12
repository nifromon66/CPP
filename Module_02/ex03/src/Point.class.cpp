/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 04:37:01 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/12 06:16:11 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.class.hpp"

///////////////////////////////////////////////// Constructor / Destructor

Point::Point() : _x(0), _y(0) {
	return ;
}

Point::Point(Point const & source) : _x(source._x), _y(source._y) {
	return ;
}

Point::Point(float const x, float const y) : _x(x), _y(y) {
	return ;
}

Point::~Point() {
	return ;
}

///////////////////////////////////////////////// Public member functions

Fixed	Point::getX(void) const {
	return (_x);
}

Fixed	Point::getY(void) const {
	return (_y);
}

///////////////////////////////////////////////// Operator overloads

bool	Point::operator==(Point const & cmp) const {
	return ((this->_x == cmp._x && this->_y == cmp._y));
}

Point &	Point::operator=(Point const & source) {
	(void)source; // Unassignable due to const variables
	return (*this);
}


