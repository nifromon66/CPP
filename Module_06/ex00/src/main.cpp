/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:06:12 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/19 14:06:46 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.class.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
		ScalarConverter::convert(av[1]);
	else
		return (1);
	return (0);
}