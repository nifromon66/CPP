/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:52:45 by nifromon          #+#    #+#             */
/*   Updated: 2025/09/21 13:28:16 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Colors.hpp"
#include <map>
#include <fstream>
#include <string>
#include <iostream>


int main(int argc, char *argv[]) {
	
	std::map<std::string, double> data_map;
	
	std::ifstream data_file("data.csv");
	if (!data_file.is_open()) {
		std::cerr << RED "Cannot open file : data.csv." RESET << std::endl;
		return (1);
	}

	std::string data_line;
	char 		delimiter = ',';
	while (std::getline(data_file, data_line)) {
		
		size_t pos = data_line.find(delimiter);
		
		if (pos != std::string::npos) {
			data_map.insert({data_line.substr(0, pos), std::stod(data_line.substr(pos + 1))});
		}
	}
	
	data_file.close();

	std::map<std::string, double> input_map;
	
	std::ifstream input_file(argv[1]);
	if (!input_file.is_open()) {
		std::cerr << RED "Cannot open file : " << argv[1] << "." RESET << std::endl;
		return (1); 
	}
	
	std::string input_line;
	char		delimiter = '|';
	while (std::getline(input_file, input_line)) {

		size_t	pos = input_line.find(delimiter);

		if (pos != std::string::npos) {
			input_map.insert({input_line.substr(0, pos - 1), std::stod(input_line.substr(pos + 2))});
		}
		else {
			std::cerr << RED "Error: Incorrect input syntax." RESET << std::endl;
			return (1);
		}
	}

	input_file.close();

	std::map<std::string, double> result_map;
	std::map<std::string, double>::iterator it_data = data_map.begin();
	std::map<std::string, double>::iterator it_input = input_map.begin();

	
	
	
	
	
}