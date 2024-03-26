#include "User.h"
#include <iostream>

using namespace std;

User::User()
{
	username, password = " ";
	deposit, withdraw, transfer, balance = 0;
}

User::~User()
{

}

bool User::isUsernameCorrect(string tempUsername)
{
	if (username==tempUsername)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool User::isPasswordCorrect(string tempPassword)
{
	if (password==tempPassword)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void User::registerUsername()
{
	cout << "Enter username: ";
	cin >> username;
}

void User::registerPassword()
{
	cout << "Enter password: ";
	cin >> password;
}

string User::getUsername()
{
	return username;
}

string User::getPassword()
{
	return password;
}

void User::setUsername()
{
	string tempUsername;
	cin >> tempUsername;
	username = tempUsername;
}

void User::setPassword()
{
	string tempPassword;
	cin >> password;
	password = tempPassword;
}

bool User::isDepositNegative(int depositAmount)
{
	if (depositAmount <= 0)
	{
		
		return true;
	}
	else
	{
		return false;
	}
}

bool User::canUserWithdraw(int withdraw)
{
	if (deposit >= withdraw || withdraw<0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void User::deductTransferMoney(int transferAmount)
{
	transfer = transferAmount;
	balance -= transferAmount;
}

void User::recieveTransferMoney(int transferAmount)
{
	transfer = transferAmount;
	balance += transferAmount;
}

void User::depositMoney()
{
	cout << "Enter deposit amount: ";
	cin >> deposit;
	if (User::isDepositNegative(deposit))
	{
		cout << "Please enter a valid deposit amount" << endl;
	}
	else
	{
		balance += deposit;
	}
	
}

void User::withdrawMoney()
{
	cout << "Enter withdraw amount:";
	cin >> withdraw;
	if (User::canUserWithdraw(withdraw))
	{
		cout << "Enter a valid withdraw amount!" << endl;
	}
	else
	{
		balance -= withdraw;
	}
	
}

void User::displayCurrentBalance()
{
	cout << "Your current balance: " << balance << endl;
}


