/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:28:02 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/19 14:30:19 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_CLASS_HPP
# define SERIALIZER_CLASS_HPP


# include <iostream>
# include <string>
# include <exception>
# include <stdint.h>
# include "Data.hpp"
# include "Colors.hpp"

class Serializer {
	public:
			static uintptr_t	serialize(Data *ptr);
			static Data			*deserialize(uintptr_t raw);
	private:
			Serializer(void);
			Serializer(Serializer const & source);
			~Serializer(void);
			Serializer & operator=(Serializer const & source);
};


#endif