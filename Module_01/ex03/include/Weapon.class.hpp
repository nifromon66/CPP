/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 08:38:33 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/08 23:37:36 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

# include <iostream>
# include <string>
# include "Colors.hpp"

// Class
class Weapon {
	public:
								Weapon(std::string type);
								~Weapon();
			std::string	const &	getType(void) const;
			void				setType(std::string newType);
	private:
			std::string			_type;
};


#endif