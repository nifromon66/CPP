/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 23:55:48 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 03:55:12 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include <iostream>
# include <string>
# include "Colors.hpp"

// Class
class Animal {
	public:
							Animal();
							Animal(Animal const & source);
			virtual			~Animal();
			
			std::string		getType(void) const;
			virtual void	makeSound(void) const;
			
			Animal &		operator=(Animal const & source);
	protected:
			std::string		type_;
							Animal(std::string type);
};

std::ostream &	operator<<(std::ostream & out, Animal const & in);

#endif