/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TextB.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 03:56:49 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/09 04:01:36 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TextB_CLASS_HPP
# define TextB_CLASS_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Colors.hpp"
# include "TextA.class.hpp"

// class
class TextB {
	public:
									TextB(TextA const & source, std::string const & target, std::string const & replace);
									~TextB();
			std::string const &		getText(void) const;
			void					setText(std::string const & newText);
			std::ofstream const &	getFd(void) const;
			void					setFd(std::ofstream & newFd);
			std::string const &		getFile(void) const;
			void					setFile(std::string const & newFile);
	private:
			std::ofstream			*_fd;
			std::string				_text;
			std::string				_file;
			
};

#endif