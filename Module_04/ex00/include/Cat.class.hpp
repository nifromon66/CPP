/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 01:10:40 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 01:33:44 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include "Animal.class.hpp"

// Class
class Cat : public Animal {
	public:
					Cat();
					Cat(Cat const & source);
					~Cat();

			void	makeSound(void) const;

			Cat &	operator=(Cat const & source);
};

#endif