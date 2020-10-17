///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: BankAccount.h
// Date: September 18, 2020
// Programmer: Rose Wallace            
//
// Description:
//   This program is the header file for the BankAccount class.  It includes declared public and private variables, destructors and constructors, and function 
//	        prototypes. 
//		 
//	
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include<string>
using namespace std;


class BankAccount
{
public:
	BankAccount();						//Default Constructor with no parameters
	BankAccount(double x, double y);	//Overloaded constructor with 2 parameters
	~BankAccount();						//Destructor

	//Function Prototypes
	void withdraw(double amount);
	void deposit(double amount);
	void calculateMonthlyInterest();
	void displayAccountInfo();

protected:
	int _id;							//made protected so derived classes can access it

private:
	static int _cnt;
	double _interest_rate = 0.0;
	double _account_balance = 0.0;


};

#endif
