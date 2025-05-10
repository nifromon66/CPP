/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 02:58:06 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/10 04:04:41 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "Colors.hpp"

// Class
class Fixed {
	public:
								Fixed(); // Default constructor
								Fixed(int const newInt); // Parametric constructor
								Fixed(float const newFloat); // Parametric constructor
								Fixed(Fixed const & source); // Copy constructor
								~Fixed(); // Default destructor
								
			Fixed &				operator=(Fixed const & source); // Assignment operator
	
			int					getRawBits(void) const; // getter
			void				setRawBits(int const raw); // setter
			float				toFloat(void) const;
			int					toInt(void) const;
	private:
			int					_fixedPoint;
			static const int	_fractBits = 8;      
};

std::ostream &					operator<<(std::ostream & out, Fixed const & in);

#endif