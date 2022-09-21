#include "Account.hpp"
#include <iostream>
#include <time.h>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _nbAccounts << ";amount:" << initial_deposit << ";created" << std::endl;
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	_totalAmount += this->_amount;
	_nbAccounts++;
}

Account::Account() {}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount;
	this->_nbDeposits++;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	if (withdrawal > this->_amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (0);
	}
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout << ";withdrawal:" << withdrawal;
	std::cout << ";amount:" << this->_amount;
	this->_nbWithdrawals++;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (1);
}

int Account::checkAmount() const
{
	return (0);
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp()
{
	time_t rawtime;
	struct tm *timeinfo;
	char buff[80];
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	
	strftime(buff, 80, "[%Y%m%d_%H%M%S] ", timeinfo);
	std::cout << buff;
}

int	Account::getNbAccounts()
{
	return(_nbAccounts);
}

int Account::getTotalAmount()
{
	return(_totalAmount);
}

int	Account::getNbDeposits()
{
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return(_totalNbWithdrawals);
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
}