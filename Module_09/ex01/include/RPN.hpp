/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 13:22:55 by nifromon          #+#    #+#             */
/*   Updated: 2026/06/24 13:23:31 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include "Colors.hpp"

# include <cstdlib>
# include <iostream>
# include <exception>
# include <sstream>
# include <stack>

class RPN
{
	private:

		std::stack<int> _stack;

		bool isValidInt(const std::string & number) const;
		void add();
		void subtract();
		void multiply();
		void divide();

	public:

		RPN();
		~RPN();
		RPN(const RPN & other);
		RPN & operator=(const RPN & other);

		RPN(const std::string & input);

		int getResult() const;

		class InvalidInputException : public std::exception
		{
			const char * what() const throw();
		};

};

#endif