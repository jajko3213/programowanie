#pragma once
#include <iostream>

class BankAccount
{
//private oznacza, �e te rzeczy s� dost�pne tylko w klasie. Pola powinny by� prywatne.
private:
	double balance; // stan konta
	std::string owner; //w�a�ciciel
	std::string currency; // waluta

public:

	//konstruktory publiczne
	BankAccount();
	BankAccount(double b, std::string o, std::string c);

	void SetBalance(double b);

	double GetBalance();
	 
	void AccountInformation();
	
	void DepositToAccount(double amount);
	
	bool WidthDrawFromAccount(double amount);
	
	void TransferBetweenAccounts(BankAccount& targetAccount, double amount);
};
