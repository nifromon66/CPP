/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 06:27:40 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/12 23:25:31 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.class.hpp"
#include "../include/ScavTrap.class.hpp"
#include "../include/FragTrap.class.hpp"
#include "../include/DiamondTrap.class.hpp"

int	main(void) {
	DiamondTrap	scav1("Didier");
	ClapTrap	clap1(scav1);
	DiamondTrap	scav2("Gontran");
	DiamondTrap	scav3(scav2);

	std::cout << scav3 << std::endl;
	scav3 = scav1;
	std::cout << scav3 << std::endl;
	scav3.attack("Girou");
	std::cout << scav3 << std::endl;
	scav3.takeDamage(50);
	std::cout << scav3 << std::endl;
	scav3.beRepaired(25);
	std::cout << scav3 << std::endl;
	scav3.whoAmI();
	scav3.setEnergyPoints(0);
	std::cout << scav3 << std::endl;
	scav3.attack("Girou");
	scav3.beRepaired(25);
	std::cout << scav3 << std::endl;
	return (0);
}