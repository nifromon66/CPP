/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:01:58 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/20 10:12:06 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

template<typename T>
void    swap(T & a, T & b) {
    T   temp = a;
    a = b;
    b = temp;
    return ;
}

template<typename T>
T const &   max(T const & a, T const & b) {
    return (a > b ? a : b);
}

template<typename T>
T const &   min(T const & a, T const & b) {
    return (a < b ? a : b);
}


#endif