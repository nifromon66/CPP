/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:52:02 by nifromon          #+#    #+#             */
/*   Updated: 2025/12/04 07:37:05 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/TextA.class.hpp"
#include "../include/TextB.class.hpp"

int	main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cout << RED "Incorrect number of arguments [" << (argc - 1) << "] | Required [3]" RESET << std::endl;
		return (0);
	}
	TextA	source(argv[1]);
	TextB	dest(source, argv[2], argv[3]);
	return (0);
}