/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 13:22:36 by nifromon          #+#    #+#             */
/*   Updated: 2026/06/24 13:23:58 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

/* ************************************************************************** */
/*								canonical form  							  */
/* ************************************************************************** */

/* *************************** default constructor ************************** */

RPN::RPN()
{}

/* ******************************* destructor ****************************** */

RPN::~RPN()
{}

/* ***************************** copy constructor *************************** */

RPN::RPN( const RPN& other ) :
	_stack(other._stack)
{}

/* ********************** copy assignment operator ************************** */

RPN & RPN::operator=( const RPN & other )
{
	if (this != &other)
	{
		this->_stack = other._stack;
	}
	return (*this);
}

/* ************************************************************************** */
/*								public methods  							  */
/* ************************************************************************** */

/* ******************************* constructors ***************************** */

RPN::RPN(const std::string & input)
{
	if (input.empty())
		throw InvalidInputException();

	std::istringstream iss(input);
	std::string token;

	while (iss >> token) {
		if (isValidInt(token))
			_stack.push(std::atoi(token.c_str()));
		else if (token == "+") {
			add();
		}
		else if (token == "-") {
			subtract();
		}
		else if (token == "*") {
			multiply();
		}
		else if (token == "/") {
			divide();
		}
		else
			throw InvalidInputException();
	}
	if (_stack.size() != 1)
		throw InvalidInputException();
}

/* ******************************** getters ********************************* */

int RPN::getResult() const
{
	return (_stack.top());
}

/* ******************************** exceptions ****************************** */

const char * RPN::InvalidInputException::what() const throw()
{
	return ("Error");
}
/* ************************************************************************** */
/*								private methods  							  */
/* ************************************************************************** */

bool RPN::isValidInt(const std::string & number) const
{
	if (number.empty())
		return (false);

	size_t i = 0;
	size_t len = number.length();
	if (number[i] == '-' || number[i] == '+')
		i++;
	if (i == len)
		return (false);
	for (; i < len; i++) {
		if (!isdigit(number[i]))
			return (false);
	}
	return (true);
}

void RPN::add()
{
	if (_stack.size() < 2)
		throw InvalidInputException();

	int b = _stack.top();
	_stack.pop();
	int a = _stack.top();
	_stack.pop();
	_stack.push(a + b);
}

void RPN::subtract()
{
	if (_stack.size() < 2)
		throw InvalidInputException();

	int b = _stack.top();
	_stack.pop();
	int a = _stack.top();
	_stack.pop();
	_stack.push(a - b);
}

void RPN::multiply()
{
	if (_stack.size() < 2)
		throw InvalidInputException();

	int b = _stack.top();
	_stack.pop();
	int a = _stack.top();
	_stack.pop();
	_stack.push(a * b);
}

void RPN::divide()
{
	if (_stack.size() < 2)
		throw InvalidInputException();

	int b = _stack.top();
	if (b == 0)
		throw InvalidInputException();
	_stack.pop();
	int a = _stack.top();
	_stack.pop();
	_stack.push(a / b);
}