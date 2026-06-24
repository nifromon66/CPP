/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 13:12:27 by nifromon          #+#    #+#             */
/*   Updated: 2026/06/24 13:14:22 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include "Colors.hpp"

# include <map>
# include <string>
# include <fstream>
# include <iostream>
# include <iomanip>
# include <exception>
# include <cstdlib>
# include <algorithm>

class BitcoinExchange
{
	public:

		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange & other);
		BitcoinExchange & operator=(const BitcoinExchange & other);

		void printData() const;
		void analyse(const char *path) const;

		class CsvErrorException : public std::exception
		{
			const char *what() const throw();
		};

		class FileErrorException : public std::exception
		{
			const char *what() const throw();
		};

	private:

		std::map<std::string, float>	_data;

		void printError(const std::string & message) const;
		void printBadInput(const std::string & line) const;
		bool isValidAmount(const std::string & amount) const;
		bool isValidDate(const std::string str) const;
		bool isValidYear(const std::string & year) const;
		bool isValidMonth(const std::string & month) const;
		bool isValidDay(const std::string & day, const std::string & month, const std::string & year) const;
		std::string trim(const std::string& s) const;

};

#endif