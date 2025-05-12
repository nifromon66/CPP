/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 06:27:40 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/12 22:23:05 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.class.hpp"
#include "../include/ScavTrap.class.hpp"

int	main(void) {
	ScavTrap	scav1("Didier");
	ClapTrap	clap1(scav1);
	ScavTrap	scav2("Gontran");
	ScavTrap	scav3(scav2);

	std::cout << scav3 << std::endl;
	scav3 = scav1;
	std::cout << scav3 << std::endl;
	scav3.attack("Girou");
	std::cout << scav3 << std::endl;
	scav3.takeDamage(50);
	std::cout << scav3 << std::endl;
	scav3.beRepaired(25);
	std::cout << scav3 << std::endl;
	scav3.guardGate();
	scav3.setEnergyPoints(0);
	std::cout << scav3 << std::endl;
	scav3.attack("Girou");
	scav3.beRepaired(25);
	std::cout << scav3 << std::endl;
	return (0);
}