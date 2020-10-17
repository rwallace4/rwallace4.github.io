//                                                                     
// Filename: CheckingAccount.h
// Date: September 18, 2020
// Programmer: Rose Wallace            
//
// Description:
//   This program is the header file for the CheckingAccount class.  It includes declared public and private variables, destructors and constructors, and function 
//	        prototypes. The CheckingAccount class is a derived class of the BankAccount base class.
//		 
//	


#include "BankAccount.h"

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include<string>
using namespace std;

class CheckingAccount :
	public BankAccount
{
public:
	CheckingAccount(); 						//Default Constructor
	CheckingAccount(double amount); 		//Overloaded  Constructor
	~CheckingAccount();						//Destructor

	//Function Prototypes
	void withdraw(double amount);
	void deposit(double amount);
	void calculateMonthlyInterest();
	void displayAccountInfo();

private:
	static const double DEFAULT_INTEREST_RATE_CHECKING;
};
#endif
