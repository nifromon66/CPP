/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:52:02 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/09 04:11:46 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/TextA.class.hpp"
#include "../include/TextB.class.hpp"

int	main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cout << "Incorrect number of arguments [" << (argc - 1) << "] | Required [3]" << std::endl;
		return (0); 
	}
	TextA	source(argv[1]);
	TextB	dest(source, argv[2], argv[3]);
	return (0);
}