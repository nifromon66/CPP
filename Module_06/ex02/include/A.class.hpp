/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.class.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 06:57:47 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/20 07:01:02 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_CLASS_HPP
# define A_CLASS_HPP


# include <iostream>
# include <string>
# include <exception>
# include "Colors.hpp"
# include "Base.class.hpp"

class A : public Base {
	public:
			A(void);
			A(A const & source);
			~A(void);
			A & operator=(A const & source);

	private:
			friend std::ostream & operator<<(std::ostream & out, A & in);
};


#endif