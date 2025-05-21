/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:52:15 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/21 16:54:33 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.class.hpp"

Span::Span(void) : _maxSize(0) {
	std::cout << BLACK_ON_GREEN "Span default constructor called." RESET << std::endl;
	return ;
}

Span::Span(size_t n) : _maxSize(n) {
	std::cout << BLACK_ON_PURPLE "Span parametric constructor called." << RESET << std::endl;
	return ;
}

Span::Span(Span const & source) {
	std::cout << BLACK_ON_CYAN "Span copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

Span::~Span(void) {
	std::cout << BLACK_ON_RED "Span default destructor called." RESET << std::endl;
	return ;
}

Span & Span::operator=(Span const & source) {
	std::cout << BLACK_ON_WHITE "Span assignment operator called." RESET << std::endl;
	if (this != &source) {
		_container.clear();
		_maxSize = source._maxSize;
		for (size_t i = 0; i < source._container.size(); ++i) {
			_container.push_back(source._container[i]);
		}
	}
	return (*this);
}

void Span::addNumber(int n) {
	if (_container.size() != _maxSize)
		_container.push_back(n);
	else
		throw _NoSpaceLeftException();
	return ;
}

int Span::shortestSpan(void) {
	if (_container.size() < 2)
		throw _NoSpanCanBeFoundException();
	std::sort(_container.begin(), _container.end());
	
	int shortSpan = std::abs(_container[0] - _container[1]);
	
	for (std::size_t i = 1; i < (_container.size() - 1); ++i) {
		int diff = std::abs(_container[i] - _container[i + 1]);
		if (diff < shortSpan && diff != 0)
			shortSpan = diff;
	}
	return (shortSpan);
}

int Span::longestSpan(void) {
	if (_container.size() < 2)
		throw _NoSpanCanBeFoundException();
	int min = *std::min_element(_container.begin(), _container.end());
	int max = *std::max_element(_container.begin(), _container.end());
	return (max - min);
}

const char *	Span::_NoSpaceLeftException::what() const throw() {
	return ("No space left in Span anymore !");
}

const char *	Span::_NoSpanCanBeFoundException::what() const throw() {
	return ("Not enough numbers to find a Span !");
}

std::ostream & operator<<(std::ostream & out, Span & in) {
	(void)in;
	out << "Span instance" << std::endl;
	return out;
}
