#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	std::cout << "je suis dans le constructor initial deposit";
	std::cout << initial_deposit << std::endl;
}

Account::Account()
{
	std::cout << "je suis le constructor" << std::endl;
}

Account::~Account() {}

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

void Account::displayAccountsInfos()
{
	std::cout << _nbAccounts << std::endl;
}

void Account::makeDeposit(int deposit)
{
	std::cout << deposit << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	std::cout << withdrawal << std::endl;
	return (0);
}

int Account::checkAmount() const
{
	std::cout << "je suis checkAmount" << std::endl;
	return (0);
}

void Account::displayStatus() const
{
	std::cout << this->_accountIndex << std::endl;
	std::cout << this->_amount << std::endl;
	std::cout << this->_nbDeposits;
	std::cout << this->_nbWithdrawals;
	std::cout << "je suis displayStatus" << std::endl;
}

void Account::_displayTimestamp()
{
	std::cout << "je suis displayTimestamp" << std::endl;
}