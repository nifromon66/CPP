/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 11:51:27 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/12 23:05:17 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include "ClapTrap.class.hpp"

// Class
class ScavTrap : virtual public ClapTrap {
	public:
						ScavTrap();
						ScavTrap(std::string name);
						ScavTrap(ScavTrap const & source);
						~ScavTrap();

			void		guardGate(void);

			ScavTrap &	operator=(ScavTrap const & source);
};

#endif