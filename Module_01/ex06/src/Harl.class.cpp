/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 04:44:06 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/09 05:49:29 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.class.hpp"

void	Harl::_debug(void) {
	std::cout	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. " 
				<< "I really do!" 
				<< std::endl;
	return ;
}

void	Harl::_info(void) {
	std::cout	<< "I cannot believe adding extra bacon costs more money. "
				<< "You didn't put enough bacon in my burger! "
				<< "If you did, I wouldn't be asking for more!"
				<< std::endl;
	return ;
}

void	Harl::_warning(void) {
	std::cout	<< "I think I deserve to have some extra bacon for free. "
				<< "I've been coming for years, whereas you started working here just last month."
				<< std::endl;
	return ;
}

void	Harl::_error(void) {
	std::cout	<< "This is unacceptable! I want to speak to the manager now."
				<< std::endl;
	return ;
}

Harl::Harl() {
	std::cout << BLACK_ON_GREEN "Harl constructor called." RESET << std::endl;
	return ;
}

Harl::~Harl() {
	std::cout << BLACK_ON_RED "Harl destructor called." RESET << std::endl;
	return ;
}

void	Harl::complain(std::string level) {
	std::string	allLevels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	t_HarlFunc	f[] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int			i(-1);

	if (level == allLevels[++i] || level == allLevels[++i] || level == allLevels[++i] || level == allLevels[++i])
		(this->*f[i])();
	return ;
}