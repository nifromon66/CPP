/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 13:28:41 by nifromon          #+#    #+#             */
/*   Updated: 2026/06/24 13:30:50 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include "Colors.hpp"

# include <string>
# include <exception>
# include <sstream>
# include <iostream>
# include <iomanip>
# include <vector>
# include <limits>
# include <cstring>
# include <cstdlib>
# include <ctime>
# include <deque>
# include <algorithm>

class PmergeMe
{
	private:

		std::vector<int>	_vector;
		std::deque<int>		_deque;
		double				_vectorTime;
		double				_dequeTime;

		void parseInput(char **argv);
		bool isValidPositiveInt(char *arg);
		std::vector<size_t> generateJacobsthalIndices(size_t max);
		void sortVector(std::vector<int> & vector);
		void sortDeque(std::deque<int> & deque);

	public:

		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe & other);
		PmergeMe & operator=(const PmergeMe & other);

		PmergeMe(char **argv);
		void displaySortVectorDuration();
		void displaySortDequeDuration();

		void displayVector();
		void displayDeque();
		void sort();

	class InvalidInputException : public std::exception
	{
		virtual const char * what() const throw();
	};

};

#endif