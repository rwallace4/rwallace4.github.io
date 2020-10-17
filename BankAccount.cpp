///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: BankAccount.cpp
// Date: September 21, 2020
// Programmer: Rose Wallace            
//
// Description:
//   This program provides the function definitions for the BankAccount class.  It includes constructors, destructors and the function definitions.  
//	     
//		 
//		 
//	



#include <iostream>
#include "../../Lab04/Lab04/Lab04/BankAccount.h"
//Program is not reading regular "BankAccount.h" file, so added the suggested pathway to clarify...not sure what is going on
//#include "BankAccount.h"



///////////////////////////////////////////////////////////////////////
//
// Function: BankAccount::BankAccount()                                      
//                                                                   
// Description:
//    Default constructor for the BankAccount class
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
BankAccount::BankAccount()		//Default Constructor
{
	_account_number = 0;
	_name = " ";
	_balance = 0.0;
}

///////////////////////////////////////////////////////////////////////
//
// Function: BankAccount::BankAccount(double balance, double rate)							                     
//                                                                   
// Description:
//    Overloaded constructor for the BankAccount class
//
// Parameters:  
//		double balance = account balance
//      double rate = interest rate
//	  
//                                                       
// Returns:  
//   Void             
//                                            
///////////////////////////////////////////////////////////////////////
BankAccount::BankAccount(string name, int accountNumber, double balance)		//Overloaded constructor
{
	_account_number = accountNumber;
	_name = name;
	_balance = balance;
}

///////////////////////////////////////////////////////////////////////
//
// Function: BankAccount::~BankAccount()                                      
//                                                                   
// Description:
//    Destructor for the BankAccount class
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
BankAccount::~BankAccount()		//Destructor
{
	
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
string BankAccount::getName()
{
	return _name; 

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
int BankAccount::getNumber()
{
	return _account_number; 

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
double BankAccount::getBalance()
{
	return _balance; 

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
void BankAccount::withdraw(double amount)
{
	_balance = _balance - amount;

}


///////////////////////////////////////////////////////////////////////
//
// Function: void BankAccount::deposit(double amount)                                    
//                                                                   
// Description:
//    Function adds an amount to account balance
//
// Parameters:  
//    double amount = money to be added to the account balance 
//    
//                                                       
// Returns:  
//   Void             
//                                            
///////////////////////////////////////////////////////////////////////
void BankAccount::deposit(double amount)
{
	_balance = _balance + amount;
}


///////////////////////////////////////////////////////////////////////
//
// Function: void BankAccount::calculateMonthlyInterest()                                   
//                                                                   
// Description:
//    Function calculates monthly interest based on balance and interest rate 
//
// Parameters:  
//    None
//    
//                                                       
// Returns:  
//   Void             
//                                            
///////////////////////////////////////////////////////////////////////

void BankAccount::createStatements()
{
	cout << "Account Name: " << _name << endl; 
	cout << "Account Number: " << _account_number << endl; 
	cout << "Account Balance: " << _balance << endl; 


}
