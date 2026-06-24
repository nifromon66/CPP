/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 13:31:05 by nifromon          #+#    #+#             */
/*   Updated: 2026/06/24 13:31:08 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2) {
        std::cerr << "Arguments needed! (positive integers)" << std::endl;
        return (1);
    }
    try
    {
        PmergeMe pm(av);
        std::cout << "Before:  ";
        pm.displayVector();

        pm.sort();
		std::cout << "After:   ";
		pm.displayVector();

		pm.displaySortVectorDuration();
		pm.displaySortDequeDuration();
   }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}