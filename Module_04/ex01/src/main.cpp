/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 01:29:47 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 05:23:28 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.class.hpp"
#include "../include/Cat.class.hpp"
#include "../include/Dog.class.hpp"

int	main(void) {
	Animal	*animals[100];
	
	for (int i = 0; i < 50; ++i)
		animals[i] = new Dog();
	for (int i = 50; i < 100; ++i)
		animals[i] = new Cat();
	for (int i = 0; i < 100; ++i) {
		animals[i]->makeSound();
		if (Dog *dog = dynamic_cast<Dog *>(animals[i]))
			std::cout << *dog << std::endl;
		if (Cat *cat = dynamic_cast<Cat *>(animals[i]))
			std::cout << *cat << std::endl;
	}
	for (int i = 0; i < 100; ++i)
		delete animals[i];
	return (0);
}