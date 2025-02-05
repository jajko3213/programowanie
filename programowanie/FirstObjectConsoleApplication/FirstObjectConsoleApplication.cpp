#include <iostream>
#include "BankAccount.h"

int main()
{
	setlocale(LC_CTYPE, "polish");
	BankAccount firstAccount(10000, "Jan Kowalski", "z�");//konstruktor z parametrami
	//firstAccount.SetBalance(10000);
	//firstAccount.balance = 10000;
	//firstAccount.owner = "Jan Kowalski";
	//firstAccount.currency = "z�";
	
	firstAccount.AccountInformation();
	//accountInformation(firstAccount);

	firstAccount.DepositToAccount(500);
	//depositToAccount(firstAccount, 500);

	firstAccount.AccountInformation();

	BankAccount secondAccount;
	//secondAccount.SetBalance(15000);
	//secondAccount.balance = 15000;
	//secondAccount.owner = "Ewa Kowalska";
	//secondAccount.currency = "z�";

	secondAccount.AccountInformation();

	secondAccount.WidthDrawFromAccount(500);

	secondAccount.AccountInformation();

	secondAccount.TransferBetweenAccounts(firstAccount, 1000);

	firstAccount.AccountInformation();

	secondAccount.AccountInformation();  
}

/*

Konstruktor - to metoda z regu�y publicza jest wywo�ywana tylko raz podczas
tworzenia obiektu automatycznie, potem si� nie da jej wywo�a�, bez typu zwracanego bez nawet void, jej 
nazwa jest taka sama jak obiektu

Nazw� metody pisze si� z du�ej litery jak i r�wnie� klasy.
Aby stworzy� klas� piszemy:

class NazwaKlasy
{

	//kod

};

Aby da� zna�, �e metoda jest metod� a nie funkcj� piszemy w 
oddzielnym pliku gdzie znajduje si� cia�o metody dla przyk�adu tak (metoda zawarta w klasie):

void NazwaKlasy::NazwaMetody
{

//kod

}

Nie ma ju� potrzeby odwo�ywa� si� do konkretnego pola w typie podczas wywo�ywania metody, poniewa� jest ona wywo�ywana w
kontek�cie odpowiedniego obiektu.Przyk�ad:

void BankAccount::AccountInformation()
{
	std::cout << "Informacje o koncie bankowym.\n";
	std::cout << "W�a�ciciel: " << owner << "\n";
	std::cout << "Saldo: " << balance << " " << currency << "\n\n";
}

Nale�y upubliczni� klas�, poniewa� jej elementy s� domy�lnie ukryte. 
W pliku hederowym piszemy klas� w kt�rej znajduj� si� nag��wki metod, 
je�li stworzyli�my w�asny typ to nale�y zapisa� tam jego cechy. Taki przyk�ad:

class BankAccount
{
public:
	double balance;
	std::string owner;  
	std::string currency;

	void AccountInformation();
}

Operatorem odniesienia/dost�pu jest ".". Przyk�adowe wywo�anie metody:

int main()
{
	firstAccount.AccountInformation();
}


Nazw� struktury piszemy z ma�ej litery jak i nazw� funkcji. Aby utworzy� struktur� piszemy:

struct nazwaStruktury
{
//kod
};

*/