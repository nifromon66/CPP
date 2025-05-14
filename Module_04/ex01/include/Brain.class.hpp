/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 02:20:05 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 03:19:32 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

# include <iostream>
# include <string>
# include "Colors.hpp"

// Class
class Brain {
	public:
								Brain();
								Brain(Brain const & source);
								~Brain();

			std::string			getIdea(int index) const;
			void				setIdeas(std::string newIdeas[100]);
			void				addIdea(std::string newIdea, int index);

			Brain &				operator=(Brain const & source);
	private:
			std::string			_ideas[100];
};

std::ostream &	operator<<(std::ostream & out, Brain const & in);

#endif