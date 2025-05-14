/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 01:48:59 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 01:49:53 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

# include "WrongAnimal.class.hpp"

// Class
class WrongCat : public WrongAnimal {
	public:
					WrongCat();
					WrongCat(WrongCat const & source);
					~WrongCat();

			void	makeSound(void) const;

			WrongCat &	operator=(WrongCat const & source);
};

#endif