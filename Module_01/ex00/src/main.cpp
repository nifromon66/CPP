/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:22:12 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/08 21:35:56 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.class.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void) {
	std::cout << "Creating 2 zombies by instance creation" << std::endl;
	Zombie	instance_z1("Anakin");
	Zombie	instance_z2("Obiwan");
	std::cout << std::endl;
	
	std::cout << "Creating 2 zombies with randomChump" << std::endl;
	randomChump("Layla");
	randomChump("Padme");
	std::cout << std::endl;
	
	std::cout << "Creating 2 zombies with newZombie" << std::endl;
	Zombie	*instance_z3 = newZombie("DeathStar");
	Zombie	*instance_z4 = newZombie("X-wing");
	std::cout << std::endl;

	std::cout << "All zombies have been created" << std::endl << std::endl;
	
	std::cout << "Deleting zombies created with newZombie" << std::endl;
	delete	instance_z3;
	delete	instance_z4;
	std::cout << std::endl;

	std::cout << "Exiting program" << std::endl;
	return (0);
}