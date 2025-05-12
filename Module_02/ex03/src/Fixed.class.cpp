/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 03:10:25 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/12 06:07:32 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.class.hpp"

///////////////////////////////////////////////// Constructor / Destructor

Fixed::Fixed() : _fixedPoint(0) {
	return ;
}

Fixed::Fixed(Fixed const & source) {
	*this = source;
	return ;
}

Fixed::Fixed(int const newInt) {
	_fixedPoint = newInt << _fractBits;
	return ;
}

Fixed::Fixed(float const newFloat) {
	_fixedPoint = static_cast<int>(roundf(newFloat * (1 << _fractBits)));
	return ;
}

Fixed::~Fixed() {
	return ;
}

///////////////////////////////////////////////// Public member functions

int	Fixed::getRawBits(void) const {
	return (_fixedPoint);
}

void	Fixed::setRawBits(int const raw) {
	_fixedPoint = raw;
	return ;
}

float	Fixed::toFloat(void) const {
	float	res;

	res = static_cast<float>(_fixedPoint) / static_cast<float>(1 << _fractBits);
	return (res);
}

int		Fixed::toInt(void) const {
	int	res;

	res = _fixedPoint / (1 << _fractBits);
	return (res);
}

Fixed &	Fixed::min(Fixed & f1, Fixed & f2) {
	if (f1._fixedPoint < f2._fixedPoint)
		return (f1);
	return (f2);
}

Fixed const &	Fixed::min(Fixed const & f1, Fixed const & f2) {
	if (f1._fixedPoint < f2._fixedPoint)
		return (f1);
	return (f2);
}

Fixed &	Fixed::max(Fixed & f1, Fixed & f2) {
	if (f1._fixedPoint > f2._fixedPoint)
		return (f1);
	return (f2);
}

Fixed const &	Fixed::max(Fixed const & f1, Fixed const & f2) {
	if (f1._fixedPoint > f2._fixedPoint)
		return (f1);
	return (f2);
}

///////////////////////////////////////////////// Operator overloads

bool	Fixed::operator>(Fixed const & cmp) const {
	return (this->_fixedPoint > cmp._fixedPoint);
}

bool	Fixed::operator>=(Fixed const & cmp) const {
	return ((this->_fixedPoint > cmp._fixedPoint || this->_fixedPoint == cmp._fixedPoint));
}

bool	Fixed::operator<(Fixed const & cmp) const {
	return (this->_fixedPoint < cmp._fixedPoint);
}

bool	Fixed::operator<=(Fixed const & cmp) const {
	return ((this->_fixedPoint < cmp._fixedPoint || this->_fixedPoint == cmp._fixedPoint));
}

bool	Fixed::operator==(Fixed const & cmp) const {
	return (this->_fixedPoint == cmp._fixedPoint);
}

bool	Fixed::operator!=(Fixed const & cmp) const {
	return (this->_fixedPoint != cmp._fixedPoint);
}

Fixed &	Fixed::operator=(Fixed const & source) {
	if (this != &source)
		this->_fixedPoint = source._fixedPoint;
	return (*this);
}

Fixed	Fixed::operator+(Fixed const & add) const {
	Fixed	res;

	res.setRawBits(this->_fixedPoint + add._fixedPoint);
	return (res);
}

Fixed	Fixed::operator-(Fixed const & sub) const {
	Fixed	res;
	
	res.setRawBits(this->_fixedPoint - sub._fixedPoint);
	return (res);	
}

Fixed	Fixed::operator*(Fixed const & times) const {
	Fixed	res;

	res.setRawBits((this->_fixedPoint * times._fixedPoint) >> _fractBits);
	return (res);
}

Fixed	Fixed::operator/(Fixed const & div) const {
	Fixed	res;

	if (div._fixedPoint == 0) {
		std::cerr << RED "Error: '/' operator : division by 0" RESET << std::endl;
		res.setRawBits(0);
		return (res);
	}
	res.setRawBits((this->_fixedPoint << _fractBits) / div._fixedPoint);
	return (res);
}

Fixed &	Fixed::operator++(void) {
	this->_fixedPoint += 1;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	temp = *this;
	
	_fixedPoint += 1;
	return (temp);
}

Fixed &	Fixed::operator--(void) {
	this->_fixedPoint -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	temp = *this;

	_fixedPoint -= 1;
	return (temp);
}

std::ostream &	operator<<(std::ostream & out, Fixed const & in) {
	if ((in.getRawBits() & 0xFF) == 0)
		return (out << in.toInt());
	return (out << in.toFloat());
}



