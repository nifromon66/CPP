/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:25:31 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/09 00:21:49 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

# include "Weapon.class.hpp"
# include "Colors.hpp"

// Class
class HumanB {
	public:
							HumanB(std::string const & name);
							~HumanB();
			void			attack(void) const;
			Weapon const &	getWeapon(void) const;
			std::string		getName(void) const;
			void			setWeapon(Weapon & newWeapon);
			void			setName(std::string & newName);
	private:
			Weapon			*_weapon;
			std::string		_name;
};

#endif