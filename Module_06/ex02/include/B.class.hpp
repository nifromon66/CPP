/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.class.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 06:58:01 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/20 07:01:57 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_CLASS_HPP
# define B_CLASS_HPP


# include <iostream>
# include <string>
# include <exception>
# include "Colors.hpp"
# include "Base.class.hpp"

class B : public Base {
	public:
			B(void);
			B(B const & source);
			~B(void);
			B & operator=(B const & source);

	private:
			friend std::ostream & operator<<(std::ostream & out, B & in);
};


#endif