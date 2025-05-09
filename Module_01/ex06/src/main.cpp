/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:22:12 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/09 06:25:49 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.class.hpp"

int	findLevel(std::string level) {
	std::string	allLevels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; ++i) {
		if (level == allLevels[i])
			return (i);
	}
	return (-1);
}

int	main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << RED "Incorrect number of arguments [" << (argc - 1) << "] | Required [1]" RESET << std::endl;
		return (0); 
	}
	Harl		harl;
	int			i(findLevel(argv[1]));
	for (; i > -1 && i < 4; ++i) {
		switch (i) {
			case DEBUG:
						std::cout << std::endl <<"[ DEBUG ]" << std::endl;
						harl.complain("DEBUG");
						continue ;
						
			case INFO:
						std::cout << std::endl <<"[ INFO ]" << std::endl;
						harl.complain("INFO");
						continue ;
			case WARNING:
						std::cout << std::endl <<"[ WARNING ]" << std::endl;
						harl.complain("WARNING");
						continue ;
			case ERROR:
						std::cout << std::endl <<"[ ERROR ]" << std::endl;
						harl.complain("ERROR");
						break ;
			default:
						std::cout << std::endl <<"[ UNKNOWN ]" << std::endl;
						break ;
		}
	}
	return (0);
}