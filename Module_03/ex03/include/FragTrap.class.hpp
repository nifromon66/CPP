/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 22:35:30 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/12 23:05:04 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# include "ClapTrap.class.hpp"

// Class
class FragTrap : virtual public ClapTrap {
	public:
						FragTrap();
						FragTrap(std::string name);
						FragTrap(FragTrap const & source);
						~FragTrap();

			void		highFiveGuys(void);

			FragTrap &	operator=(FragTrap const & source);
};

#endif