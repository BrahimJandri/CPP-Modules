#include "Account.hpp"
#include <ctime>


int Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int Account::getTotalAmount( void )
{
    return _totalAmount;
}

int Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

