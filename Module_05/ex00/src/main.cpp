/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 23:31:43 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/19 02:37:50 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.class.hpp"

int main(void) {
    try
    {
		Bureaucrat b1("Ursula", 2);
		std::cout << b1 << std::endl;

		b1.upGrade();
		std::cout << "After promotion : " << b1 << std::endl;

		b1.upGrade();
		std::cout << "This message won't be display\n";
	}
	catch (const std::exception& e)
    {
		std::cerr << "Exception caught (b1) : " << e.what() << std::endl;
	}

	std::cout << "---------------------------" << std::endl;

	try
    {
		Bureaucrat b2("Thierry Breton", 149);
		std::cout << b2 << std::endl;

		b2.downGrade();
		std::cout << "After retrogradation : " << b2 << std::endl;

		b2.downGrade();
        std::cout << "This message won't be display\n";

	}
	catch (const std::exception& e)
    {
		std::cerr << "Exception caught (b2) : " << e.what() << std::endl;
	}

	std::cout << "---------------------------" << std::endl;

	try
    {
		Bureaucrat b3("Jean Michel fonctionnaire", 160);
		std::cout << b3 << std::endl;
	}
	catch (const std::exception& e)
    {
		std::cerr << "Exception caught (b3) : " << e.what() << std::endl;
	}
}