/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 01:29:47 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 05:24:07 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.class.hpp"
#include "../include/Cat.class.hpp"
#include "../include/Dog.class.hpp"

int	main(void) {
	Dog	*dogs[50];
	Cat	*cats[50];
	
	for (int i = 0; i < 50; ++i)
		dogs[i] = new Dog();
	for (int i = 0; i < 50; ++i)
		cats[i] = new Cat();
	for (int i = 0; i < 50; ++i) {
		dogs[i]->makeSound();
		std::cout << *dogs[i] << std::endl;
	}
	for (int i = 0; i < 50; ++i) {
		cats[i]->makeSound();
		std::cout << *cats[i] << std::endl;
	}
	for (int i = 0; i < 50; ++i)
		delete dogs[i];
	for (int i = 0; i < 50; ++i)
		delete cats[i];
	return (0);
}