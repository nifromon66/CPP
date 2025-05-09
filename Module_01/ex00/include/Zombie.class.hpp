/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 08:38:33 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/08 21:24:22 by nifromon         ###   ########.fr       */
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
						~Zombie();
			void		annouce(void);
			std::string	getName(void) const;
	private:
			std::string _name;
};


#endif