/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 06:28:38 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/12 21:08:25 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

# include <iostream>
# include <string>
# include "Colors.hpp"

// Class
class ClapTrap {
	public:
						ClapTrap(); // Default constructor
						ClapTrap(std::string name); // Parametric constructor
						ClapTrap(ClapTrap const & source); // Copy constructor
						~ClapTrap(); // Default destructor;
						
			std::string	getType(void) const;
			std::string	getName(void) const;
			int			getHitPoints(void) const;
			int			getEnergyPoints(void) const;
			int			getAttackDamage(void) const;
			
			void		setType(std::string newType);
			void		setName(std::string newName);
			void		setHitPoints(int newHitPoints);
			void		setEnergyPoints(int newEnergyPoints);
			void		setAttackDamage(int newAttackDamage);

			void		attack(std::string const & target);
			void		takeDamage(unsigned int amount);
			void		beRepaired(unsigned int amount);

			ClapTrap &	operator=(ClapTrap const & source);
    private:
			std::string	_type;
			std::string	_name;
			int			_hitPoints;
			int			_energyPoints;
			int			_attackDamage;
};

std::ostream &	operator<<(std::ostream & out, ClapTrap const & in);

#endif