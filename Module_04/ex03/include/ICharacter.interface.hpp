/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.interface.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 09:36:52 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 11:30:01 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_INTERFACE_HPP
# define ICHARACTER_INTERFACE_HPP

# include "AMateria.abstract.hpp"

class AMateria;

// Interface
class ICharacter {
	public:
			virtual 					~ICharacter() {};
			virtual std::string const & getName() const = 0;
			virtual void				equip(AMateria *toEquip) = 0;
			virtual void				unequip(int index) = 0;
			virtual void				use(int index, ICharacter & target) = 0;
};

#endif