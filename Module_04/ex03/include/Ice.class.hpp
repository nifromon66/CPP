/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:18:21 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 11:51:06 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

# include "AMateria.abstract.hpp"

// Class
class Ice : public AMateria {
	public:
						Ice();
						Ice(Ice const & source);
						~Ice();
			
			Ice			*clone(void) const;
			void		use(ICharacter & target);
};

#endif