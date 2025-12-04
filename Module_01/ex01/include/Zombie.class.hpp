/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 08:38:33 by nifromon          #+#    #+#             */
/*   Updated: 2025/12/04 06:41:08 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <iostream>
# include <string>
# include "Colors.hpp"

// Class
class Zombie {
	public:
						Zombie(std::string name);
						Zombie();
						~Zombie();
			void		announce(void);
			void		setName(std::string name);
			std::string	getName(void) const;
	private:
			std::string _name;
};


#endif