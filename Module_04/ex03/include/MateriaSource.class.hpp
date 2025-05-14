/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 09:08:29 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/14 10:10:18 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
# define MATERIASOURCE_CLASS_HPP

# include "IMateriaSource.interface.hpp"

// class
class MateriaSource : public IMateriaSource {
	public:
							MateriaSource();
							~MateriaSource();
							MateriaSource(MateriaSource const & source);
			
			AMateria		*(&getContainer(void))[4];

			void			learnMateria(AMateria *toLearn);
			AMateria		*createMateria(std::string const & type);

			MateriaSource &	operator=(MateriaSource const & source);
	private:
			AMateria		*_container[4];
};

std::ostream &	operator<<(std::ostream & out, MateriaSource & in);

#endif