#include <iostream>
#include <string>
#include "Bank.h"
#include <vector>
#include <time.h>//for time()
#include <stdlib.h>//for rand()
#include "User.h"

//using namespace std;

/*
Create a program that has a Bank Account
- login system
- deposit, withdraw, transfer money
- vector for users
*/

void registerUser(User temp, vector<User>& account)
{
	char reply;
	do
	{
		cout << "Register:\n";
		temp.registerUsername();
		temp.registerPassword();
		system("cls");

		account.push_back(temp); //dynamically allocate a user account to the vector
		cout << "Add another account?(Y/N)";
		std:: cin >> reply;
	} while (reply == 'Y' || reply == 'y');
}

void verifyUser(vector<User>&account)
{
	bool isverified = false;
	string tempUsername,tempPassword;
	
	do
	{
		cout << "Log In:\n\nEnter username: ";
		std::cin >> tempUsername;

		cout << "Enter password: ";
		std::cin >> tempPassword;

		for (auto i = account.begin(); i < account.end(); i++) //.end() goes up to 1 past the last item in the vector
		{
			if (i->isUsernameCorrect(tempUsername) && i->isPasswordCorrect(tempPassword))
			{
				isverified = true;
				break;
			}
			else
			{
				cout << "Username or password was wrong. Try again!" << endl;
			}
		}
	} while (isverified == false);
}

void transferMoney(Bank b,User temp,vector<User>&account,int accountIterator)
{
	string username;
	int transferAmount=0;
	cout << "Enter the username of the person you want to transfer $ to: ";
	std::cin >> username;
	cout << "Enter transfer amount: ";
	std::cin >> transferAmount;

	for (auto i = account.begin(); i <account.end(); i++)//check that username is one of the accounts
	{
		if (i->isUsernameCorrect(username))
		{
			b.transferMoney(username,transferAmount);

			i->recieveTransferMoney(transferAmount); // give transfer $ to another account
			account.at(accountIterator).deductTransferMoney(transferAmount); //deduct transfer $ from current account

			break;
		}
	}
}

void chooseOption(Bank b,User temp,vector<User>&account,int accountIterator)
{
	char reply;
	int option=0;
	
	do
	{
		cout << "Choose between\n1.Deposit $\n2.Withdraw $\n3.Transfer $\n";
		std::cin >> option;
		if (option == 1)
		{
			account.at(accountIterator).depositMoney();
			account.at(accountIterator).displayCurrentBalance();

		}
		else if (option == 2)
		{
			account.at(accountIterator).withdrawMoney();
			account.at(accountIterator).displayCurrentBalance();
		}
		else if (option == 3)
		{

			transferMoney(b, temp, account, accountIterator);
			account.at(accountIterator).displayCurrentBalance();

		}
		cout << "Do you want to continue?(Y/N)";
		std::cin >> reply;
		system("cls");

	} while (reply=='y' || reply=='Y');
}

int main()
{
	using std::vector;
	using std::cout;
	
	User temp = User(); //?????	
	vector<User> account;
	Bank b = Bank();
	int accountIterator = 0;
	//auto currentUser = account.at(accountIterator);

	
	do
	{
		registerUser(temp,account);
		verifyUser(account);
		system("cls");

		chooseOption(b,temp, account,accountIterator);
		
		accountIterator++;

	} while (account.size()<=5);//this loop runs while size of users is <= 5

	return 0;
}

void VectorPractice()
{
	vector<int> foo;

	srand(unsigned(time(NULL))); //set seed
	int randomNumber, highest = 0;

	//generate 5 random #s and display highest one

	for (int i = 0; i < 5; i++)
	{
		randomNumber = rand() % 100 + 1;
		foo.push_back(randomNumber);
	}

	for (auto i = foo.begin(); i < foo.end(); i++)
	{
		cout << "The 5 numbers are: " << *i << std::endl;
	}
	highest = foo.at(0);

	for (auto i = foo.begin(); i < foo.end(); i++)
	{
		if (*i > highest)
		{
			highest = *i;
		}
	}
	cout << "highest = " << highest;
}