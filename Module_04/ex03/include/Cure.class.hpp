/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:02:55 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 11:51:02 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

# include "AMateria.abstract.hpp"

// Class
class Cure : public AMateria {
	public:
						Cure();
						Cure(Cure const & source);
						~Cure();
			
			Cure		*clone(void) const;
			void		use(ICharacter & target);
};

#endif