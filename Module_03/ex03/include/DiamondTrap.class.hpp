/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 22:54:47 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/12 23:00:44 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS_HPP
# define DIAMONDTRAP_CLASS_HPP

# include "ClapTrap.class.hpp"
# include "ScavTrap.class.hpp"
# include "FragTrap.class.hpp"

// Class
class DiamondTrap : public ScavTrap, FragTrap {
	public:
							DiamondTrap();
							DiamondTrap(std::string name);
							DiamondTrap(DiamondTrap const & source);
							~DiamondTrap();

			void			whoAmI(void);

			DiamondTrap &	operator=(DiamondTrap const & source);
	private:
			std::string		_name;
};

#endif