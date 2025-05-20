/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 07:02:52 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/20 07:02:53 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.class.hpp"

Base::~Base(void) {
	std::cout << BLACK_ON_RED "Base default destructor called." RESET << std::endl;
	return ;
}


std::ostream & operator<<(std::ostream & out, Base & in) {
	(void)in;
	out << "Base instance" << std::endl;
	return out;
}
