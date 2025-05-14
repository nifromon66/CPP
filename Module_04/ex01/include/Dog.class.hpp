/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 01:27:52 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 04:29:19 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include "Animal.class.hpp"
# include "Brain.class.hpp"

// Class
class Dog : public Animal {
	public:
						Dog();
						Dog(Dog const & source);
						~Dog();

			Brain		*getBrain(void) const;
			void		makeSound(void) const;

			Dog &		operator=(Dog const & source);
	private:
			Brain		*_brain;
};

std::ostream &	operator<<(std::ostream & out, Dog const & in);

#endif