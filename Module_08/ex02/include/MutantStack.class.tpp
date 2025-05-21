/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.class.tpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:26:54 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/21 17:42:28 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS_TPP
# define MUTANTSTACK_CLASS_TPP

# include "MutantStack.class.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {
	std::cout << BLACK_ON_GREEN "MutantStack default constructor called." RESET << std::endl;
	return ;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & source) : std::stack<T>(source) {
	std::cout << BLACK_ON_CYAN "MutantStack copy constructor called." RESET << std::endl;
	return ;
}

template <typename T>
MutantStack<T>::~MutantStack() {
	std::cout << BLACK_ON_RED "MutantStack default destructor called." RESET << std::endl;
	return ;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack<T> const & source) {
	std::cout << BLACK_ON_WHITE "MutantStack assignment operator called." RESET << std::endl;
	if (this != &source)
		std::stack<T>::operator=(source);
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return (std::stack<T>::c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return (std::stack<T>::c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const {
	return (std::stack<T>::c.begin());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const {
	return (std::stack<T>::c.end());
}

#endif