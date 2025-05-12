/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 06:27:40 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/12 22:43:38 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.class.hpp"
#include "../include/ScavTrap.class.hpp"
#include "../include/FragTrap.class.hpp"

int	main(void) {
	FragTrap	scav1("Didier");
	ClapTrap	clap1(scav1);
	FragTrap	scav2("Gontran");
	FragTrap	scav3(scav2);

	std::cout << scav3 << std::endl;
	scav3 = scav1;
	std::cout << scav3 << std::endl;
	scav3.attack("Girou");
	std::cout << scav3 << std::endl;
	scav3.takeDamage(50);
	std::cout << scav3 << std::endl;
	scav3.beRepaired(25);
	std::cout << scav3 << std::endl;
	scav3.highFiveGuys();
	scav3.setEnergyPoints(0);
	std::cout << scav3 << std::endl;
	scav3.attack("Girou");
	scav3.beRepaired(25);
	std::cout << scav3 << std::endl;
	return (0);
}