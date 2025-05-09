/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:22:12 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/08 23:10:58 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Colors.hpp"

int	main(void) {
	std::string	str("HI THIS IS BRAIN");
	std::string	*ptr = &str;
	std::string	&ref = str;

	std::cout << "========== Print Memory adresses ==========" << std::endl;
	std::cout << "Memory address of str : " << &str << std::endl; 
	std::cout << "Memory address of str ptr : " << ptr << std::endl;
	std::cout << "Memory address of str ref : " << &ref << std::endl;
	std::cout << std::endl;
	
	std::cout << "========== Print Values ==========" << std::endl;
	std::cout << "Value of str : " << str << std::endl; 
	std::cout << "Value of str ptr : " << *ptr << std::endl;
	std::cout << "Value of str ref : " << ref << std::endl;
	std::cout << std::endl;
	return (0);
}