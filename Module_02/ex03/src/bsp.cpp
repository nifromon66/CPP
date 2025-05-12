/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 05:06:14 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/12 06:18:03 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.class.hpp"

static Fixed	calcArea(Point const & p1, Point const & p2, Point const & p3) {
	return ((p1.getX().toFloat() - p3.getX().toFloat())
			* (p2.getY().toFloat() - p3.getY().toFloat())
			- (p2.getX().toFloat() - p3.getX().toFloat())
			* (p1.getY().toFloat() - p3.getY().toFloat()));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	if (point == a || point == b || point == c)
		return (false);
	Fixed	area1(calcArea(point, a, b));
	Fixed	area2(calcArea(point, b, c));
	Fixed	area3(calcArea(point, c, a));
	if (area1 > 0 && area2 > 0 && area3 > 0)
		return (true);
	else if (area1 < 0 && area2 < 0 && area3 < 0)
		return (true);
	return (false);
}
