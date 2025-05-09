/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TextA.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:49:56 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/09 04:01:50 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TextA_CLASS_HPP
# define TextA_CLASS_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Colors.hpp"

// class
class TextA {
	public:
									TextA(const char * file);
									~TextA();
			std::string const &		getText(void) const;
			void					setText(std::string const & newText);
			std::ifstream const &	getFd(void) const;
			void					setFd(std::ifstream & newFd);
			std::string const &		getFile(void) const;
			void					setFile(std::string const & newFile);
	private:
			std::ifstream			*_fd;
			std::string				_text;
			std::string				_file;
			
};

#endif