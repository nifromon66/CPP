/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:43:58 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/21 17:05:00 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

# include <vector>
# include <algorithm>
# include <iostream>
# include <string>
# include <exception>
# include <climits>
# include <cstdlib>
# include <ctime>
# include "Colors.hpp"

class Span {
	public:
								Span(void);
								Span(size_t n);
								Span(Span const & source);
								~Span(void);
			Span & 				operator=(Span const & source);

			void				addNumber(int n);

			template<typename I>
			void				addNumber(I begin, I end) {
				if (_container.size() + (std::distance(begin, end)) <= _maxSize)
					_container.insert(_container.end(), begin, end);
				else
					throw _NoSpaceLeftException();
				return ;
			}
			int					shortestSpan(void);
			int					longestSpan(void);
	private:
			std::vector<int>	_container;
			size_t				_maxSize;
			class _NoSpaceLeftException : public std::exception {
				public:
						virtual const char * what() const throw();
			};
			class _NoSpanCanBeFoundException : public std::exception {
				public:
						virtual const char * what() const throw();
			};
			friend std::ostream & operator<<(std::ostream & out, Span & in);
};


#endif