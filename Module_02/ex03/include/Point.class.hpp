/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 04:25:26 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/12 05:09:20 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_CLASS_HPP
# define POINT_CLASS_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "Colors.hpp"

# include "Fixed.class.hpp"

// Class
class Point {
	public:
						Point(); // Default constructor
						Point(Point const & source); // Copy constructor
						Point(float const x, float const y); // Parametric constructor 
						~Point(); // Default destructor

			Fixed		getX(void) const;
			Fixed		getY(void) const;

			bool		operator==(Point const & cmp) const;
			Point &		operator=(Point const & source); // Assigment operator
	private:
			Fixed const	_x;
			Fixed const _y;
};

#endif