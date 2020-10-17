///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: CheckingAccount.cpp
// Date: September 18, 2020
// Programmer: Rose Wallace            
//
// Description:
//   This program provides the function definitions for the CheckingAccount class.  It includes constructors, destructors and the function definitions.  
//	     The CheckingAccount class is a derived class of the BankAccount class.  
//		 
//		 
//	



#include "CheckingAccount.h"
#include <iostream>

const double CheckingAccount::DEFAULT_INTEREST_RATE_CHECKING = 0.04;

///////////////////////////////////////////////////////////////////////
//
// Function: CheckingAccount::CheckingAccount():BankAccount(0, DEFAULT_INTEREST_RATE_SAVINGS)                                      
//                                                                   
// Description:
//    Default constructor for the CheckingAccount class
//
// Parameters:  
//    0 = default balance
//    DEFAULT_INTEREST_RATE_SAVINGS = const double static variable declared in this file
//	  
//                                                       
// Returns:  
//   Void             
//                                            
///////////////////////////////////////////////////////////////////////
CheckingAccount::CheckingAccount() :BankAccount(0, DEFAULT_INTEREST_RATE_CHECKING)		//Default Constructor with no parameters
{

	//If the AccountBalance of the CheckingAccount falls below $500 then a fee of $50 is charged to the account.
	//const double DEFAULT_FEE_CHECKING = 50.0;

}

///////////////////////////////////////////////////////////////////////
//
// Function: CheckingAccount::CheckingAccount(double balance):BankAccount(0, DEFAULT_INTEREST_RATE_SAVINGS)                                      
//                                                                   
// Description:
//    Overloaded constructor for the CheckingAccount class
//
// Parameters:  
//    double balance = account balance value
//	  0 = default balance
//    DEFAULT_INTEREST_RATE_SAVINGS = const double static variable declared in this file
//	  
//                                                       
// Returns:  
//   Void             
//                                            
///////////////////////////////////////////////////////////////////////
CheckingAccount::CheckingAccount(double balance) :BankAccount(balance, DEFAULT_INTEREST_RATE_CHECKING)		//Overloaded constructor
{

	//If the AccountBalance of the CheckingAccount falls below $500 then a fee of $50 is charged to the account.
	//const double DEFAULT_FEE_CHECKING = 50.0;

}

///////////////////////////////////////////////////////////////////////
//
// Function: CheckingAccount::~CheckingAccount()                                      
//                                                                   
// Description:
//    Destructor for the CheckingAccount class
//
// Parameters:  
//    None 
//    
//	  
//                                                       
// Returns:  
//   Void             
//                                            
///////////////////////////////////////////////////////////////////////
CheckingAccount::~CheckingAccount()
{

}


///////////////////////////////////////////////////////////////////////
//
// Function: void CheckingAccount::withdraw(double amount)                                    
//                                                                   
// Description:
//    Function withdraws money from the account balance by calling 
//		base class function
//
// Parameters:  
//    double amount = money to be withdrawn from the account balance 
//    
//                                                       
// Returns:  
//   Void             
//                                            
///////////////////////////////////////////////////////////////////////
void CheckingAccount::withdraw(double amount)
{
	BankAccount::withdraw(amount);

}


///////////////////////////////////////////////////////////////////////
//
// Function: void CheckingAccount::deposit(double amount)                                    
//                                                                   
// Description:
//    Function adds an amount to account balance by calling the 
//			base class function
//
// Parameters:  
//    double amount = money to be added to the account balance 
//    
//                                                       
// Returns:  
//   Void             
//                                            
///////////////////////////////////////////////////////////////////////
void CheckingAccount::deposit(double amount)
{
	BankAccount::deposit(amount);
}



///////////////////////////////////////////////////////////////////////
//
// Function: void CheckingAccount::calculateMonthlyInterest()                                   
//                                                                   
// Description:
//    Function calculates monthly interest based on balance and interest rate 
//			by calling base class function
//
// Parameters:  
//    None
//    
//                                                       
// Returns:  
//   Void             
//                                            
///////////////////////////////////////////////////////////////////////
void CheckingAccount::calculateMonthlyInterest()
{
	BankAccount::calculateMonthlyInterest();
}

///////////////////////////////////////////////////////////////////////
//
// Function: void CheckingAccount::displayAccountInfo()                                  
//                                                                   
// Description:
//    Function displays info from the account to the console by calling
//			the base class function
//
// Parameters:  
//    None
//    
//                                                       
// Returns:  
//   Void             
//                                            
///////////////////////////////////////////////////////////////////////
void CheckingAccount::displayAccountInfo()
{
	BankAccount::displayAccountInfo();


}