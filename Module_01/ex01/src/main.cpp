/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:22:12 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/08 22:25:06 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.class.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void) {
	Zombie	*horde;

	std::cout << "Creating a horde of 100 Zombies" << std::endl;
	horde = zombieHorde(100, "Lucille");
	std::cout << std::endl;

	std::cout << "Making the horde annouce themselves" << std::endl << std::endl;
	for (int i = 0; i < 100; ++i)
		horde[i].annouce();
	std::cout << std::endl;
	delete[] horde;
	return (0);
}