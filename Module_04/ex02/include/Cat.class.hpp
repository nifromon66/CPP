/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 01:10:40 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 05:24:22 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include "AAnimal.class.hpp"
# include "Brain.class.hpp"

// Class
class Cat : public AAnimal {
	public:
						Cat();
						Cat(Cat const & source);
						~Cat();

			Brain		*getBrain(void) const;
			void		makeSound(void) const;

			Cat &		operator=(Cat const & source);
	private:
			Brain		*_brain;
};

std::ostream &	operator<<(std::ostream & out, Cat const & in);

#endif