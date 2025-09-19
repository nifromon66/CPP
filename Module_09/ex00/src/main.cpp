/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:52:45 by nifromon          #+#    #+#             */
/*   Updated: 2025/09/19 18:06:53 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Colors.hpp"
#include <map>
#include <fstream>
#include <string>
#include <iostream>

std::string parse_line(std::string line) {
	std::string	result;
	char 		delimiter = '|';
	size_t		pos = line.find(delimiter);

	if (pos != std::string::npos) {
		
	}
}

int main(int argc, char *argv[]) {
	
	std::map<std::string, double> data_map;
	
	std::ifstream data_file("data.csv");
	if (!data_file.is_open()) {
		std::cerr << RED "Cannot open file : data.csv." RESET << std::endl;
		return (1);
	}

	std::string data_line;
	char delimiter = ',';
	while (std::getline(data_file, data_line)) {
		
		size_t pos = data_line.find(delimiter);
		
		if (pos != std::string::npos) {
			data_map.insert({data_line.substr(0, pos), std::stod(data_line.substr(pos + 1))});
		}
	}
	
	data_file.close();

	std::ifstream input_file(argv[1]);
	if (!input_file.is_open()) {
		std::cerr << RED "Cannot open file : " << argv[1] << "." RESET << std::endl;
		return (1); 
	}
	
	std::string input_line;
	
	
}