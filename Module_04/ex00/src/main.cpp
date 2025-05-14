/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 01:29:47 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 04:09:55 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.class.hpp"
#include "../include/Cat.class.hpp"
#include "../include/Dog.class.hpp"

#include "../include/WrongAnimal.class.hpp"
#include "../include/WrongCat.class.hpp"

int	main(void) {
	std::cout << "========== Right Version ==========" << std::endl << std::endl;
	const Animal	*meta = new Animal();
	const Animal	*dog = new Dog();
	const Animal	*cat = new Cat();
	
	std::cout << *dog << std::endl;
	std::cout << *cat << std::endl;
	
	dog->makeSound();
	cat->makeSound();
	meta->makeSound();
	
	delete meta;
	std::cout << std::endl;
	delete dog;
	std::cout << std::endl;
	delete cat;

	std::cout << "========== Wrong Version ==========" << std::endl << std::endl;
	const WrongAnimal	*wrongmeta = new WrongAnimal();
	const WrongAnimal	*wrongcat = new WrongCat();
	
	std::cout << *wrongcat << std::endl;
	
	wrongcat->makeSound();
	wrongmeta->makeSound();
	
	delete wrongmeta;
	std::cout << std::endl;
	delete wrongcat;

	return (0);
}