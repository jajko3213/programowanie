#include <iostream>
#include <fstream>
#include <vector>

int reversenumber(int num)
{
	int reversed = 0;
	while (num > 0)
	{
		reversed = reversed * 10 + num % 10;
		num /= 10;
	}
	return reversed;
}


int main()
{
	std::ifstream file("przyklad.txt");
	if (!file) {
		std::cout << "Blad nie mozna otworzyc pliku przyklad.txt" << std::endl;
		return 1
	}

	int number;
	int theBiggestreflection = 0;
	int numberWittGreatestreflection = 0.;

	std::cout << "zadanie 4.1 - Odbicie liczby 51." << std::endl;

	while (file >> number) {
		if (number % 17 == 0) {
			std::cout << reversenumber(number) << std::endl;
		}
	
	}
}
