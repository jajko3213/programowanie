#include <iostream>

/*
* Napisz program, który poprosi użytkownika o wprowadzenie dowolnej liczby całkowitej. Następnie program powinien obliczyć i wyświetlić liczbę cyfr.
* Napisz program, który sprawdza czy więcej jest cyfr parzystych, czy nieparzystych we wczytanej liczbie.
* Poproś użytkownika o podawanie liczb, aż wprowadzi zero. Oblicz sumę oraz średnią arytmetyczną wprowadzonych liczb.
*/

//Napisz program, który wczyta od użytkownika liczbę dodatnią
void task1()
{
	int number;

	/*
	std::cout << "Podaj liczbę dodatnią\n";
	std::cin >> number;
	if (number < 0)
	{
		std::cout << "Podaj liczbę dodatnią\n";
		std::cin >> number;
		if (number < 0)
		{
			std::cout << "Podaj liczbę dodatnią\n";
			std::cin >> number;
			if (number < 0)
			{
				std::cout << "Podaj liczbę dodatnią\n";
				std::cin >> number;
				if (number < 0)
				{
					//....
				}
			}
		}
	}
	*/

	do
	{
		std::cout << "Podaj liczbę dodatnią\n";
		std::cin >> number;
	} while (number < 0);

	std::cout << "Podano liczbę " << number << "\n";
}

//Napisz program, który wylosuje liczbę 
//a następnie uzytkownik będzie musiał ją zgadnąć.
void task2()
{
	int randomNumber;

	srand(time(0));
	randomNumber = rand() % 101;

	//std::cout << "Liczba losowa " << randomNumber << "\n";

	int numberFromUser;

	/*
	std::cout << "Podaj liczbę:\n";
	std::cin >> numberFromUser;
	if (numberFromUser != randomNumber)
	{
		std::cout << "Podaj liczbę:\n";
		std::cin >> numberFromUser;
		if (numberFromUser != randomNumber)
		{
			std::cout << "Podaj liczbę:\n";
			std::cin >> numberFromUser;
			if (numberFromUser != randomNumber)
			{
				//...
			}
		}
	}
	*/

	do
	{
		std::cout << "Podaj liczbę:\n";
		std::cin >> numberFromUser;
		if (numberFromUser > randomNumber)
			std::cout << "Za duża liczba\n";
		if (numberFromUser < randomNumber)
			std::cout << "Za mała liczba\n";
	} while (numberFromUser != randomNumber);

	std::cout << "Gratulacje!!!\nZgałeś liczbę\n";
}

//Napisz program wyświetlający liczby całkowite z przedziału <0,x> (wartość x podaje użytkownik)
void task3()
{
	long long upperRange;
	std::cout << "Podaj górny zakres:\n";
	std::cin >> upperRange;

	/*
	std::cout << "0, ";
	if (upperRange >= 1)
	{
		std::cout << "1, ";
		if (upperRange >= 2)
		{
			std::cout << "2, ";
			if (upperRange >= 3)
			{
				//...
			}
		}
	}
	*/

	int number = 0;
	do
	{
		std::cout << number << ", ";
		number++;
	} while (upperRange >= number);
}

//Napisz program, który policzy sumę cyfr podanej przez użytkownika liczby.
void task4()
{
	int number;
	do
	{
		std::cout << "Podaj liczbę dodatnią\n";
		std::cin >> number;
	} while (number < 0);

	int tmpNumber;
	int sumOfDigits = 0;

	do
	{
		/*
		tmpNumber = -1;
		do
		{
			tmpNumber++;
		} while ((number - tmpNumber) % 10 != 0);

		std::cout << tmpNumber << ", ";
		*/

		int rest = number % 10;
		//std::cout << rest << ", ";
		sumOfDigits = sumOfDigits + rest;

		number = number / 10;

	} while (number > 0);
	std::cout << "Suma cyfr wynosi " << sumOfDigits << "\n";
}

/*Napisz program, który poprosi użytkownika o wprowadzenie dowolnej liczby całkowitej.Następnie program powinien obliczyć i wyświetlić liczbę cyfr.*/

void task5()
{
	int number;
	do
	{
		std::cout << "podaj liczbe dodatnia";
		std::cin >> number;
	} while (number < 0);

	int numberOfDigit = 0;
	do
	{
		number = number / 10;
		numberOfDigit++;
	} while (number > 0);

	std::cout << "ilosc cyfr w liczbie to" << numberOfDigit;
}

/*Napisz program, który sprawdza czy więcej jest cyfr parzystych, czy nieparzystych we wczytanej liczbie.*/

void task6()
{
	int number;
	int even = 0;
	int odd = 0;

	std::cout << "podaj liczbe";
	std::cin >> number;

	while (number != 0)
	{
		int cyfra = number % 10;

		if (cyfra % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		number /= 10;
	}
	if (even < odd)
		std::cout << "wiecej jest cyfr parzystych ";
	if (even == odd)
		std::cout << "cyfr parzystych jest tyle samo co nieparzystych ";
	else
		std::cout << "wiecej jest cyfr parzystych ";
}

/*Poproś użytkownika o podawanie liczb, aż wprowadzi zero.Oblicz sumę oraz średnią arytmetyczną wprowadzonych liczb.*/

void task7()
{
	int number;
	int sum = 0;
	int amount = 0;

	std::cout << "podaj liczby (wpisz 0, aby zakonczyc)\n";

	do
	{

		std::cin >> number;
		sum += number;
		amount++;
	} while (number != 0);

	sum -= 0;
	amount--;

	if (amount > 0)
	{
		double srednia = static_cast<double>(sum) / amount;
		std::cout << "suma wprowadzonych liczb" << sum << "\n";
		std::cout << "srednia arytmetyczna" << srednia << "\n";
	}
	else
	{
		std::cout << "nie wprowadzono zadnych liczb. \n";
	}
}

int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	task7();
}

