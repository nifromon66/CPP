/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:55:01 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/08 22:19:07 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.class.hpp"

Zombie  *zombieHorde(int N, std::string name) {
	Zombie	*zombieHorde = new Zombie[N];

	for (int i = 0; i < N; ++i) {
		zombieHorde[i].setName(name);
	}
	return (zombieHorde);
}