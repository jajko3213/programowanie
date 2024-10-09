#pragma once
#include <iostream>

class BankAccount
{
public:
	double balance; // saldo
	std::string owner; //w³aœciciel
	std::string currency; //waluta

	void AccountInformation();

	bool widthdrawalFromAccount(BankAccount& account, double amount);

	void transferBetweenAcounts(BankAccount& sourceAccount, BankAccount& targetAccount, double amount);
	

	void BankAccount DepositToAccount(double amount);
	
};