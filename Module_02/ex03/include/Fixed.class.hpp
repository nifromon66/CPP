/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 02:58:06 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/12 06:07:43 by nifromon         ###   ########.fr       */
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
	
			int						getRawBits(void) const; // getter
			void					setRawBits(int const raw); // setter
			float					toFloat(void) const;
			int						toInt(void) const;

			static Fixed &			min(Fixed & f1, Fixed & f2);
			static Fixed const &	min(Fixed const & f1, Fixed const & f2);
			static Fixed &			max(Fixed & f1, Fixed & f2);
			static Fixed const &	max(Fixed const & f1, Fixed const & f2);

			bool					operator>(Fixed const & cmp) const;
			bool					operator>=(Fixed const & cmp) const;
			bool					operator<(Fixed const & cmp) const;
			bool					operator<=(Fixed const & cmp) const;
			bool					operator==(Fixed const & cmp) const;
			bool					operator!=(Fixed const & cmp) const;
			Fixed &					operator=(Fixed const & source); // Assignment operator
			Fixed					operator+(Fixed const & add) const;
			Fixed					operator-(Fixed const & sub) const;
			Fixed					operator*(Fixed const & times) const;
			Fixed					operator/(Fixed const & div) const;
			Fixed &					operator++(void);
			Fixed					operator++(int);
			Fixed &					operator--(void);
			Fixed					operator--(int);
	private:
			int					_fixedPoint;
			static const int	_fractBits = 8;      
};

std::ostream &					operator<<(std::ostream & out, Fixed const & in);

#endif