/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 23:55:48 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 05:22:33 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include <iostream>
# include <string>
# include "Colors.hpp"

// Class
class AAnimal {
	public:
							AAnimal();
							AAnimal(AAnimal const & source);
			virtual			~AAnimal();
			
			std::string		getType(void) const;
			virtual void	makeSound(void) const = 0;
			
			AAnimal &		operator=(AAnimal const & source);
	protected:
			std::string		type_;
							AAnimal(std::string type);
};

std::ostream &	operator<<(std::ostream & out, AAnimal const & in);

#endif