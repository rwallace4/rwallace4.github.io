//                                                                     
// Filename: SavingsAccount.h
// Date: September 18, 2020
// Programmer: Rose Wallace            
//
// Description:
//   This program is the header file for the SavingsAccount class.  It includes declared public and private variables, destructors and constructors, and function 
//	        prototypes. The SavingsAccount class is a derived class of the BankAccount base class.
//		 
//	



#include "BankAccount.h"

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include<string>
using namespace std;

class SavingsAccount :
	public BankAccount
{
public:
	SavingsAccount();						//Default constructor
	SavingsAccount(double amount);			//Overloaded constructor
	~SavingsAccount();						//Destructor

	//Function Prototypes
	void withdraw(double amount);
	void deposit(double amount);
	void calculateMonthlyInterest();
	void displayAccountInfo();


private:
	static const double DEFAULT_INTEREST_RATE_SAVINGS;
};
#endif
