/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TextB.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 03:56:24 by nifromon          #+#    #+#             */
/*   Updated: 2025/12/04 07:38:02 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/TextB.class.hpp"

TextB::TextB(TextA const & source, std::string const & target, std::string const & replace) :
	_text(""),
	_file(source.getFile() + ".replace")
{
	std::cout << BLACK_ON_GREEN "TextB constructor of : [" << _file << "] file called." RESET << std::endl;

	if (target.empty())
		return ;
	for (size_t i = 0; i < source.getText().length(); ++i) {
		size_t	new_line = source.getText().find('\n', i);
		if (new_line != std::string::npos)
			_text += _search_and_replace(source.getText().substr(i, (new_line - i)), target, replace) + '\n';
		else if (new_line == std::string::npos) {
			_text += _search_and_replace(source.getText().substr(i), target, replace);
			break ;
		}
		i += new_line - i;
	}

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

std::string	TextB::_search_and_replace(std::string line, std::string target, std::string replace)
{
	std::size_t	pos = 0;

	while ((pos = line.find(target, pos)) != std::string::npos)
	{
		std::string before = line.substr(0, pos);
		std::string	after = line.substr(pos + target.length());
		line = before + replace + after;
		pos += replace.length();
	}
	return (line);
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