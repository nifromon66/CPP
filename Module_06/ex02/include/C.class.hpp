/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.class.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 06:58:18 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/20 07:01:33 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_CLASS_HPP
# define C_CLASS_HPP


# include <iostream>
# include <string>
# include <exception>
# include "Colors.hpp"
# include "Base.class.hpp"

class C : public Base {
	public:
			C(void);
			C(C const & source);
			~C(void);
			C & operator=(C const & source);

	private:
			friend std::ostream & operator<<(std::ostream & out, C & in);
};


#endif