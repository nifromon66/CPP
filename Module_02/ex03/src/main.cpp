/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 02:57:40 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/12 06:19:16 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.class.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main( void ) {
	Point	a(0.0f, 0.0f), b(5.0f, 0.0f), c(0.0f, 5.0f);
	Point	true_point(2.0f, 2.0f);
	Point	false_point_edge(4.0f, 1.0f);
	Point	false_point_out(6.0f, 6.0f);

	std::cout << "=========== TRIANGLE ==========" << std::endl;
	std::cout << "a : (" << a.getX() << ", " << a.getY() << ")." << std::endl;
	std::cout << "b : (" << b.getX() << ", " << b.getY() << ")." << std::endl;
	std::cout << "c : (" << c.getX() << ", " << c.getY() << ")." << std::endl;
	std::cout << "============ POINTS ===========" << std::endl;
	std::cout << "point1 : (" << true_point.getX() << ", " << true_point.getY() << ")." << std::endl;
	if (bsp(a, b, c, true_point) == true)
		std::cout << "point1 is inside the triangle" << std::endl;
	else
		std::cout << "point1 is outside the triangle" << std::endl;
	std::cout << "point2 : (" << false_point_edge.getX() << ", " << false_point_edge.getY() << ")." << std::endl;
	if (bsp(a, b, c, false_point_edge) == true)
		std::cout << "point2 is inside the triangle" << std::endl;
	else
		std::cout << "point2 is outside the triangle" << std::endl;
	std::cout << "point3 : (" << false_point_out.getX() << ", " << false_point_out.getY() << ")." << std::endl;
	if (bsp(a, b, c, false_point_out) == true)
		std::cout << "point3 is inside the triangle" << std::endl;
	else
		std::cout << "point3 is outside the triangle" << std::endl;
	return (0);
}
