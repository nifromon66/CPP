/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 05:01:48 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/08 08:22:09 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : 
	_accountIndex(_nbAccounts++),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
	return ;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
	return ;
}

int	Account::getNbAccounts() {
	return (_nbAccounts);	
}

int	Account::getTotalAmount() {
	return (_totalAmount);	
}

int	Account::getNbDeposits() {
	return (_totalNbDeposits);	
}

int	Account::getNbWithdrawals() {
	return (_totalNbWithdrawals);	
}

int	Account::checkAmount(void) const {
	return (_amount);	
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex 
			<< ";amount:" << _amount
			<< ";deposits:" << _nbDeposits
			<< ";withdrawals:" << _nbWithdrawals
			<< std::endl;
	return ;
}


void	Account::makeDeposit(int deposit) {
	int	previous_amount(_amount);
	
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";p_amount:" << previous_amount
			<< ";deposit:" << deposit
			<< ";amount:" << _amount
			<< ";nb_deposits:" << _nbDeposits
			<< std::endl;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal) {
	int	previous_amount(_amount);

	if (previous_amount - withdrawal < 0) {
		_displayTimestamp();
		std::cout << "index:" << _accountIndex
				<< ";p_amount:" << previous_amount
				<< ";withdrawal:refused"
				<< std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";p_amount:" << previous_amount
			<< ";withdrawal:" << withdrawal
			<< ";amount:" << _amount
			<< ";nb_withdrawals:" << _nbWithdrawals
			<< std::endl;
	return (true);
}

void	Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";"
			<< "total:" << getTotalAmount() << ";"
			<< "deposits:" << getNbDeposits() << ";"
			<< "withdrawals:" << getNbWithdrawals()
			<< std::endl;
	return ;
}

void	Account::_displayTimestamp(void) {
	char			time_buffer[20];
	std::time_t	current = std::time(0);
	std::tm*		utc = std::gmtime(&current);

	std::strftime(time_buffer, sizeof(time_buffer), "[%Y%m%d_%H%M%S]", utc);
	std::cout << time_buffer << " ";
	return ;
}