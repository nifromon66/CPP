/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:35:41 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/09 00:23:08 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

# include "Weapon.class.hpp"
# include "Colors.hpp"

// Class
class HumanA {
	public:
							HumanA(std::string name, Weapon & weapon);
							~HumanA();
			void			attack(void) const;
			Weapon const &	getWeapon(void) const;
			std::string		getName(void) const;
			void			setWeapon(Weapon & newWeapon);
			void			setName(std::string & newName);
	private:
			Weapon &		_weapon;
			std::string		_name;
};

#endif