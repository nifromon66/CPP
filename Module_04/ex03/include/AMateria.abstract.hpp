/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.abstract.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 08:41:27 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 11:29:20 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

# include <iostream>
# include <string>
# include "Colors.hpp"
# include "ICharacter.interface.hpp"

class ICharacter;

// Abstract
class AMateria {
	public:
								AMateria();
								AMateria(std::string const & type);
								AMateria(AMateria const & source);
			virtual				~AMateria();

			std::string const &	getType(void) const;

			virtual AMateria	*clone(void) const = 0;
			virtual void		use(ICharacter & target);

			AMateria &			operator=(AMateria const & source);
	protected:
			std::string			_type;
};



#endif