/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.class.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:50:20 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/20 11:38:53 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_TPP
# define ARRAY_CLASS_TPP

#include "Array.class.hpp"

template<typename T>
Array<T>::Array(void) : _size(0), _ptr(NULL) {
	std::cout << BLACK_ON_GREEN "Array default constructor called." RESET << std::endl;
	 return ;
}

template<typename T>
Array<T>::Array(size_t n) : _size(n), _ptr(NULL) {
	std::cout << BLACK_ON_PURPLE "Array parametric constructor called." RESET << std::endl;
	if (n != 0) {
		_ptr = new T[n];
	}
	return ;
}

template<typename T>
Array<T>::Array(Array const & source) : _size(0), _ptr(NULL) {
	std::cout << BLACK_ON_CYAN "Array copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

template<typename T>
Array<T>::~Array(void) {
	std::cout << BLACK_ON_RED "Array default destructor called." RESET << std::endl;
	_clean();
	return ;
}

template<typename T>
T & Array<T>::operator[](size_t index) {
	if (index >= _size)
		throw _OutOfRangeException();
	return (_ptr[index]);
}

template<typename T>
const T & Array<T>::operator[](size_t index) const {
	if (index >= _size)
		throw _OutOfRangeException();
	return (_ptr[index]);
}

template<typename T>
Array<T> & Array<T>::operator=(Array const & source) {
	std::cout << BLACK_ON_WHITE "Array assignment operator called." RESET << std::endl;
	if (this != &source) {
		_clean();
		_size = source._size;
		if (_size != 0) {
			_ptr = new T[_size];
			for (size_t i = 0; i < _size; ++i) {
				_ptr[i] = source._ptr[i];
			}
		}
	}
	return (*this);
}

template<typename T>
size_t Array<T>::size(void) const {
	return (_size);
}

template<typename T>
void Array<T>::_clean(void) {
	if (_ptr) {
		delete[] _ptr;
		_ptr = NULL;
	}
	return ;
}

#endif