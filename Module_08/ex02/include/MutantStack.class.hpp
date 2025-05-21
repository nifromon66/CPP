/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:26:28 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/21 17:41:54 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS_HPP
# define MUTANTSTACK_CLASS_HPP


# include <stack>
# include <iterator>
# include <iostream>
# include <list>
# include <string>
# include <exception>
# include "Colors.hpp"

template <typename T>
class MutantStack : public std::stack<T> {

	public:

		MutantStack();
		MutantStack(MutantStack<T> const & source);
		~MutantStack();
		MutantStack& operator=(MutantStack<T> const & source);

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator begin();
		iterator end();
		const_iterator begin() const;
		const_iterator end() const;
};

# include "MutantStack.class.tpp"


#endif