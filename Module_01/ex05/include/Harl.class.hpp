/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 04:36:04 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/09 05:56:08 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_HPP
# define HARL_CLASS_HPP

# include <iostream>
# include <string>
# include "Colors.hpp"

// Class
class Harl {
	public:
			Harl();
			~Harl();
			void	complain(std::string level);
	private:
			void	_debug(void);
			void	_info(void);
			void	_warning(void);
			void	_error(void);
};

// Function Alias
typedef void	(Harl::*t_HarlFunc)(void);

#endif