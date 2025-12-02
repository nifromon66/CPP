/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TextB.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 03:56:24 by nifromon          #+#    #+#             */
/*   Updated: 2025/12/02 11:35:58 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/TextB.class.hpp"

TextB::TextB(TextA const & source, std::string const & target, std::string const & replace) :
	_text(""),
	_file(source.getFile() + ".replace")
{
	std::size_t	pos(0);
	std::size_t	i(0);
	std::size_t	j(0);
	std::size_t	k(0);
	int			diff(replace.length() - target.length());

	std::cout << BLACK_ON_GREEN "TextB constructor of : [" << _file << "] file called." RESET << std::endl;
	if (!target.empty()) {
		while ((pos = source.getText().find(target, pos)) != std::string::npos) {
			pos += target.length();
			i++;
		}
	}
	std::size_t	*occurences = new std::size_t[i + 1];
	pos = 0;
	while (k < i && (pos = source.getText().find(target, pos)) != std::string::npos) {
		if (k == 0)
			occurences[k] = pos;
		else
			occurences[k] = pos + (k * diff);
		pos += target.length();
		i++;
	}
	for (j = 0, k = 0; source.getText()[j];) {
		if (k < i && j == occurences[k]) {
			_text.insert(occurences[k], replace);
			j += target.length();
			k++;
		}
		else {
			_text.push_back(source.getText()[j]);
			j++;
		}
	}
	delete[] occurences;
	std::ofstream	OutputFd(_file.c_str());
    _fd = &OutputFd;
    if (!OutputFd.is_open()) {
		std::cerr << RED "Failed to open file [" << _file << "]." << std::endl;
		return ;
	}
    OutputFd << _text;
    OutputFd.close();
	return ;
}

TextB::~TextB() {
	 std::cout << BLACK_ON_RED "TextB destructor of : [" << _file << "] file called." RESET << std::endl;
}

std::string const &	TextB::getText(void) const {
	return (_text);
}

void	TextB::setText(std::string const & newText) {
	_text = newText;
	return ;
}

std::ofstream const &	TextB::getFd(void) const {
	return (*_fd);
}

void	TextB::setFd(std::ofstream & newFd) {
	_fd = &newFd;
	return ;
}

std::string const &	TextB::getFile(void) const {
	return (_file);
}
void	TextB::setFile(std::string const & newFile) {
	_file = newFile;
	return ;
}