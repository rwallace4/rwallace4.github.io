///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: mainDriver.cpp
// Date: September 18, 2020
// Programmer: Rose Wallace            
//
// Description:
//   This program creates various CheckingAccount and SavingsAccount objects. It then calls the functions of each class to withdraw, deposit, calculate interest, 
//	        etc. of these objects and finally display the account data for each to the console.
//		 
//		 
//	
#include <iostream>
#include <iomanip>
#include "SavingsAccount.h"
#include "CheckingAccount.h"

using namespace std;

int main()
{
    CheckingAccount jackAccount(1000);
    CheckingAccount lisaAccount(450);
    SavingsAccount samirAccount(9300);
    SavingsAccount ritaAccount(32);

    jackAccount.deposit(1000);
    lisaAccount.deposit(2300);
    samirAccount.deposit(800);
    ritaAccount.deposit(500);

    jackAccount.calculateMonthlyInterest();
    lisaAccount.calculateMonthlyInterest();
    samirAccount.calculateMonthlyInterest();
    ritaAccount.calculateMonthlyInterest();

    cout << "***********************************" << endl;
    jackAccount.displayAccountInfo();
    lisaAccount.displayAccountInfo();
    samirAccount.displayAccountInfo();
    ritaAccount.displayAccountInfo();
    cout << "***********************************" << endl << endl;

    jackAccount.withdraw(250);
    lisaAccount.withdraw(350);
    samirAccount.withdraw(120);
    ritaAccount.withdraw(290);

    cout << "********After withdrawals ***************" << endl;
    jackAccount.displayAccountInfo();
    lisaAccount.displayAccountInfo();
    samirAccount.displayAccountInfo();
    ritaAccount.displayAccountInfo();
    cout << "***********************************" << endl << endl;

    system("pause");
    return 0;
}
