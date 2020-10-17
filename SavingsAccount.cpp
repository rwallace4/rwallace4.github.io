///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: SavingsAccount.cpp
// Date: September 21, 2020
// Programmer: Rose Wallace            
//
// Description:
//   This program provides the function definitions for the SavingsAccount class.  It includes constructors, destructors and the function definitions.  
//	     The SavingsAccount class is a derived class of the BankAccount class.  
//		 
//		 
//	


#include "../../Lab04/Lab04/Lab04/SavingsAccount.h"
//Program is not reading regular "BankAccount.h" file, so added the suggested pathway to clarify...not sure what is going on
//#include SavingsAccount.h
#include <iostream>


///////////////////////////////////////////////////////////////////////
//
// Function: SavingsAccount::SavingsAccount():BankAccount(0, DEFAULT_INTEREST_RATE_SAVINGS)                                      
//                                                                   
// Description:
//    Default constructor for the SavingsAccount class
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
SavingsAccount::SavingsAccount() :BankAccount(" ", 0, 0.0)		//Default Constructor with no parameters
{
	

}

///////////////////////////////////////////////////////////////////////
//
// Function: SavingsAccount::SavingsAccount(double balance):BankAccount(0, DEFAULT_INTEREST_RATE_SAVINGS)                                      
//                                                                   
// Description:
//    Overloaded constructor for the SavingsAccount class
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
SavingsAccount::SavingsAccount(string name, int accountNumber, double balance) :BankAccount(name, accountNumber, balance)		//Overloaded constructor
{
	

}

///////////////////////////////////////////////////////////////////////
//
// Function: SavingsAccount::~SavingsAccount()                                      
//                                                                   
// Description:
//    Destructor for the SavingsAccount class
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
SavingsAccount::~SavingsAccount()
{

}


///////////////////////////////////////////////////////////////////////
//
// Function: void SavingsAccount::withdraw(double amount)                                    
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
///////////////////////////////////////////////////////////////////////
//
// Function: void BankAccount::withdraw(double amount)                                    
//                                                                   
// Description:
//    Function withdraws money from the account balance 
//
// Parameters:  
//    double amount = money to be withdrawn from the account balance 
//    
//                                                       
// Returns:  
//   Void             
//                                            
///////////////////////////////////////////////////////////////////////
string SavingsAccount::getName()
{
	return BankAccount::getName();

}

///////////////////////////////////////////////////////////////////////
//
// Function: void BankAccount::withdraw(double amount)                                    
//                                                                   
// Description:
//    Function withdraws money from the account balance 
//
// Parameters:  
//    double amount = money to be withdrawn from the account balance 
//    
//                                                       
// Returns:  
//   Void             
//                                            
///////////////////////////////////////////////////////////////////////
int SavingsAccount::getNumber()
{
	return BankAccount::getNumber();

}

///////////////////////////////////////////////////////////////////////
//
// Function: void BankAccount::withdraw(double amount)                                    
//                                                                   
// Description:
//    Function withdraws money from the account balance 
//
// Parameters:  
//    double amount = money to be withdrawn from the account balance 
//    
//                                                       
// Returns:  
//   Void             
//                                            
///////////////////////////////////////////////////////////////////////
double SavingsAccount::getBalance()
{
	return BankAccount::getBalance();

}


///////////////////////////////////////////////////////////////////////
//
// Function: void BankAccount::withdraw(double amount)                                    
//                                                                   
// Description:
//    Function withdraws money from the account balance 
//
// Parameters:  
//    double amount = money to be withdrawn from the account balance 
//    
//                                                       
// Returns:  
//   Void             
//                                            
///////////////////////////////////////////////////////////////////////
void SavingsAccount::withdraw(double amount)
{
	BankAccount::withdraw(amount);

}


///////////////////////////////////////////////////////////////////////
//
// Function: void SavingsAccount::deposit(double amount)                                    
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
void SavingsAccount::deposit(double amount)
{
	BankAccount::deposit(amount);
}



///////////////////////////////////////////////////////////////////////
//
// Function: void SavingsAccount::calculateMonthlyInterest()                                   
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
void SavingsAccount::createStatements()
{
	BankAccount::createStatements();
}
