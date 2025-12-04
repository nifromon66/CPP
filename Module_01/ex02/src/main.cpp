/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:22:12 by nifromon          #+#    #+#             */
/*   Updated: 2025/12/04 06:42:34 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Colors.hpp"

int	main(void) {
	std::string	str("HI THIS IS BRAIN");
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "========== Print Memory adresses ==========" << std::endl;
	std::cout << "Memory address of str : " << &str << std::endl;
	std::cout << "Memory address of str stringPTR : " << stringPTR << std::endl;
	std::cout << "Memory address of str stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "========== Print Values ==========" << std::endl;
	std::cout << "Value of str : " << str << std::endl;
	std::cout << "Value of str stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value of str stringREF : " << stringREF << std::endl;
	std::cout << std::endl;
	return (0);
}