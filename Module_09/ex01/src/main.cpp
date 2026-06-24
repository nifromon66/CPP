/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 13:24:23 by nifromon          #+#    #+#             */
/*   Updated: 2026/06/24 13:24:25 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2) {
		std::cerr << "Error: one argument needed!" << std::endl;
		return (1);
	}


	try {
		std::string input(av[1]);
		RPN rpn(input);
		std::cout << rpn.getResult() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	return (0);
}