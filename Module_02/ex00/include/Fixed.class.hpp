/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 02:58:06 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/10 03:51:10 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <string>
# include "Colors.hpp"

// Class
class Fixed {
	public:
								Fixed(); // Default constructor
								Fixed(Fixed const & source); // Copy constructor
								~Fixed(); // Default destructor
								
			Fixed &				operator=(Fixed const & source); // Assignment operator
	
			int					getRawBits(void) const; // getter
			void				setRawBits(int const raw); // setter
	private:
			int					_fixedPoint;
			static const int	_fractBits = 8;      
};

#endif