/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:28:26 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 11:26:05 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include "ICharacter.interface.hpp"

// Class
class Character : public ICharacter {
	public:
								Character();
								Character(std::string const & name);
								Character(Character const & source);
								~Character();
			
			std::string const & getName(void) const;
			AMateria			*(&getInventory(void))[4];
			
			void				equip(AMateria *toEquip);
			void				unequip(int index);
			void				use(int index, ICharacter & target);

			Character &			operator=(Character const & source);
	private:
			std::string			_name;
			AMateria			*_inventory[4];
};

std::ostream &	operator<<(std::ostream & out, Character & in);

#endif