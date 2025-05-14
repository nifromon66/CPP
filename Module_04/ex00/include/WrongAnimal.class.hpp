/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 01:45:39 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 01:51:34 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP

# include <iostream>
# include <string>
# include "Colors.hpp"

// Class
class WrongAnimal {
	public:
							WrongAnimal();
							WrongAnimal(WrongAnimal const & source);
							WrongAnimal(std::string type);
			    			~WrongAnimal();
			
			std::string		getType(void) const;
			void	        makeSound(void) const;
			
			WrongAnimal &		operator=(WrongAnimal const & source);
	protected:
			std::string		type_;
};

std::ostream &	operator<<(std::ostream & out, WrongAnimal const & in);

#endif