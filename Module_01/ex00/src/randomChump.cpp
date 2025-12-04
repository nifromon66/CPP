/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:17:17 by nifromon          #+#    #+#             */
/*   Updated: 2025/12/04 06:41:08 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.class.hpp"

void    randomChump(std::string name) {
    Zombie  zombie(name);
    zombie.announce();
    return ;
}