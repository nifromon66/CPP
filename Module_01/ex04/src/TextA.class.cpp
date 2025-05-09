/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TextA.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 01:04:53 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/09 03:54:27 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/TextA.class.hpp"

TextA::TextA(const char * file) : _text(""), _file(file) {
	std::string		line;
	std::ifstream	InputFd(file);

	std::cout << BLACK_ON_GREEN "TextA constructor of : [" << file << "] file called." RESET << std::endl;
	_fd = &InputFd;
	if (!InputFd.is_open()) {
		std::cerr << RED "Failed to open file [" << file << "]." << std::endl;
		return ;
	}
	while (std::getline(InputFd, line)) {
		_text += (line + "\n");
	}
	InputFd.close();
	return ;
}

TextA::~TextA() {
	 std::cout << BLACK_ON_RED "TextA destructor of : [" << _file << "] file called." RESET << std::endl;
}

std::string const &	TextA::getText(void) const {
	return (_text);
}

void	TextA::setText(std::string const & newText) {
	_text = newText;
	return ;
}

std::ifstream const &	TextA::getFd(void) const {
	return (*_fd);
}

void	TextA::setFd(std::ifstream & newFd) {
	_fd = &newFd;
	return ;
}

std::string const &	TextA::getFile(void) const {
	return (_file);
}
void	TextA::setFile(std::string const & newFile) {
	_file = newFile;
	return ;
}