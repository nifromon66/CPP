/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:01:58 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/20 10:26:40 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template<typename T>
void    iter(T *array, int len, void (*f)(T &)) {
    for (int i = 0; i < len; ++i) {
        f(array[i]);
    }
    return ;
}

template<typename T>
void    display(T & element) {
    std::cout << element;
    return ;
}

#endif