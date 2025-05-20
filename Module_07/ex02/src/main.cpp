/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:49:28 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/20 11:39:38 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.class.hpp"

int	main(void) {
	try {
		std::cout << "Test 1: Array<int> is empty" << std::endl;
		Array<int> empty;
		std::cout << "Size: " << empty.size() << std::endl;

		std::cout << "\nTest 2: Array<std::string> of 3 elements" << std::endl;
		Array<std::string> words(3);
		words[0] = "Hello";
		words[1] = "World";
		words[2] = "!";

		for (unsigned int i = 0; i < words.size(); ++i)
			std::cout << "Element [" << i << "] = " << words[i] << std::endl;

		std::cout << "\nTest 3: Copy constructor" << std::endl;
		Array<std::string> copy(words);
		copy[0] = "Hello";
		std::cout << "Original[0]: " << words[0] << std::endl;
		std::cout << "Copy[0]    : " << copy[0] << std::endl;

		std::cout << "\nTest 4: Affectation (operator=)" << std::endl;
		Array<std::string> assigned;
		assigned = words;
		assigned[1] = "la";
		std::cout << "Original[1]: " << words[1] << std::endl;
		std::cout << "Assigned[1]: " << assigned[1] << std::endl;

		std::cout << "\nTest 5: Out of range (exception)" << std::endl;
		std::cout << words[42] << std::endl; // 💥 do it throw
	}
	catch (const std::exception& e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	}

	std::cout << "\nTest 6: Array<int> of 5 elements with default initialization" << std::endl;
	Array<int> numbers(5);
	for (unsigned int i = 0; i < numbers.size(); ++i)
		std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;

	return (0);
}