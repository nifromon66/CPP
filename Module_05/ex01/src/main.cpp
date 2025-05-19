/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 23:31:43 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/19 08:19:45 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.class.hpp"
#include "../include/Form.class.hpp"

int main(void)
{
	std::cout << "--- Creation of a valid Bureaucrat ---" << std::endl;
	Bureaucrat b1("Jean-Michel", 42);
	std::cout << b1 << std::endl;

	std::cout << "\n--- Creation of valid Form---" << std::endl;
	Form f1("Tax number 214574", 45, 30);
	std::cout << f1 << std::endl;

	std::cout << "\n--- Signature by Bureaucrat (valid) ---" << std::endl;
	b1.signForm(f1);
	std::cout << f1 << std::endl;

	std::cout << "\n--- Creation of an invalid Bureaucrat (grade 0) ---" << std::endl;
	try {
		Bureaucrat b2("Error", 0);
	} catch (const std::exception& e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	}

	std::cout << "\n--- Creation of an invalid Bureaucrat (grade 151) ---" << std::endl;
	try {
		Form f2("TopSecret", 151, 10);
	} catch (const std::exception& e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	}

	std::cout << "\n--- Signature by Bureaucrat (invalid grade) ---" << std::endl;
	Form f3("Attestation Covid", 40, 20);
	std::cout << f3 << std::endl;
	b1.signForm(f3);
	std::cout << f3 << std::endl;

	return 0;
}