/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:36:21 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/20 11:32:36 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_HPP
# define ARRAY_CLASS_HPP


# include <iostream>
# include <string>
# include <exception>
# include "Colors.hpp"

template<typename T>
class Array {
	public:
			Array(void);
			Array(size_t n);
			Array(Array const & source);
			~Array(void);

			
			T &		operator[](size_t index);
			const T & operator[](size_t index) const;
			Array & operator=(Array const & source);

			size_t	size(void) const;

	private:
			size_t	_size;
			T		*_ptr;
			void	_clean(void);
			class	_OutOfRangeException : public std::exception {
				virtual const char * what() const throw(){
					return ((RED "Out of range access" RESET));
				}
			};
};

#include "Array.class.tpp"

#endif