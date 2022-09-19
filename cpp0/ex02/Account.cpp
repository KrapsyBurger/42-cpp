#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit)
{
	std::cout << initial_deposit << std::endl;
}

Account::Account() {}

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
