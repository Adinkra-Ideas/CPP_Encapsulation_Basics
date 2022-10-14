/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:15:07 by euyi              #+#    #+#             */
/*   Updated: 2022/10/03 20:15:07 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Account.hpp"

	// Global statics
	int	Account::_nbAccounts = 0;
	int	Account::_totalAmount = 0;
	int	Account::_totalNbDeposits = 0;
	int	Account::_totalNbWithdrawals = 0;


Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
				<< this->_amount << ";closed\n";
}

Account::Account( void )
{
}

Account::Account( int initial_deposit )
{
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;

	this->_accountIndex = Account::_nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
				<< this->_amount << ";created\n";
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int	tmp;

	tmp = this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << tmp
				<< ";withdrawal:";
	if ( (this->_amount - withdrawal) < 0 )
	{
		std::cout << "refused" << std::endl;
		return (true);
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;

		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		
		std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:"
					<< this->_nbWithdrawals << std::endl;
		return (false);
	}				 
}

void	Account::makeDeposit( int deposit )
{
	int	tmp;

	tmp = this->_amount;
	
	this->_amount += deposit;
	this->_nbDeposits += 1;

	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
	
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << tmp
				<< ";deposit:" << deposit << ";amount:" << this->_amount 
				<< ";nb_deposits:" << this->_nbDeposits << std::endl;
	
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
				<< this->_amount << ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:"
				<< Account::getTotalAmount() << ";deposits:"
				<< Account::getNbDeposits() << ";withdrawals:"
				<< Account::getNbWithdrawals() << std::endl;
	
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

void	Account::_displayTimestamp( void )
{
	std::cout << "[20221004_091532] ";
}
