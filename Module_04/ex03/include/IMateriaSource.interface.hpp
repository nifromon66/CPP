/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.interface.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 08:53:58 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 08:59:15 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_INTERFACE_HPP
# define IMATERIASOURCE_INTERFACE_HPP

# include <iostream>
# include <string>
# include "AMateria.abstract.hpp"
# include "Colors.hpp"

// Interface
class IMateriaSource {
	public:
			virtual 			~IMateriaSource() {};
			virtual	void		learnMateria(AMateria *) = 0;
			virtual	AMateria	*createMateria(std::string const & type) = 0;
};

#endif