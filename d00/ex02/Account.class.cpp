/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 09:51:23 by tvisenti          #+#    #+#             */
/*   Updated: 2017/04/04 13:40:50 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.class.hpp"

Account::Account( int initial_deposit ) {

    _nbAccounts += 1;
    _totalAmount += initial_deposit;

    this->_accountIndex = _nbAccounts - 1;
    this->_amount = initial_deposit;
    this->_nbWithdrawals = 0;
    this->_nbDeposits = 0;

    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
    return;
}

Account::~Account( void ) {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
    return;
}

void    Account::_displayTimestamp( void ) {
    time_t rawtime;
    struct tm * timeinfo;
    char buffer [32];

    time (&rawtime);
    timeinfo = localtime (&rawtime);

    strftime (buffer, 32, "[%Y%m%d_%H%M%S] ", timeinfo);
    std::cout << buffer;
    return;
}

void	Account::makeDeposit( int deposit ) {
    int p_amount = this->_amount;
    _totalNbDeposits += 1;
    _totalAmount += deposit;

    this->_amount += deposit;
    this->_nbDeposits += 1;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";deposits:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
    return;
}

bool    Account::makeWithdrawal( int withdrawal ) {
    int p_amount = this->_amount;

    if (p_amount < withdrawal) {
        _displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:refused" << std::endl;
        return false;
    } else {
        _totalNbWithdrawals += 1;
        _totalAmount -= withdrawal;

        this->_amount -= withdrawal;
        this->_nbWithdrawals += 1;
        _displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        return true;
    }
}

void	Account::displayAccountsInfos( void ) {
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
    return;
}

void	Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
    return;
}

int     Account::getNbAccounts( void ) {
    return _nbAccounts;
}

int     Account::getTotalAmount( void ) {
    return _totalAmount;
}

int     Account::getNbDeposits( void ) {
    return _totalNbDeposits;
}

int     Account::getNbWithdrawals( void ) {
    return _totalNbWithdrawals;
}

int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;
