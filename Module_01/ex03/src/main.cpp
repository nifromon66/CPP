/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:13:36 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/09 00:07:59 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include "../include/Weapon.class.hpp"
#include "../include/HumanA.class.hpp"
#include "../include/HumanB.class.hpp"

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "Incorrect number of arguments [" << (argc - 1) << "] | Required [1]" << std::endl;
		return (0); 
	}
	if (strcmp(argv[1], "1") == 0)
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	else if (strcmp(argv[1], "2") == 0)
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	else
		std::cout << "Try again : [1] for HumanA [Bob] | [2] for HumanB [Jim]" << std::endl;
	return (0);
}
