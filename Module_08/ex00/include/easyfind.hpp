/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:59:14 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/21 02:39:41 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <vector>
# include <list>
# include <string>
# include <iostream>
# include "Colors.hpp"

template<typename T>
typename T::iterator   easyfind(T & container, int nbr) {
    typename T::iterator it;
    for (it = container.begin(); it != container.end(); ++it) {
        if (*it == nbr)
            return (it);
    }
    throw std::runtime_error("Value was not found");
}

#endif