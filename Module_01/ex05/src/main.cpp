/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:22:12 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/09 05:51:26 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.class.hpp"

int	main(void) {
	Harl	harl;

	std::cout	<< std::endl << "[ DEBUG ] :" << std::endl;
	harl.complain("DEBUG");
	std::cout	<< std::endl << "[ INFO ] :" << std::endl;
	harl.complain("INFO");
	std::cout	<< std::endl << "[ WARNING ] :" << std::endl;
	harl.complain("WARNING");
	std::cout	<< std::endl << "[ ERROR ] :" << std::endl;
	harl.complain("ERROR");
	std::cout	<< std::endl << "[ UNKNOWN ] :" << std::endl;
	harl.complain("UNKNOWN");
	return (0);
}