#include <iostream>

/*
Piorytety operatorów:
* /
+ -
>< >= <= == !=
&&
||
=

operatory porowania:
> wiekszosci
< mniejszosci
>= wiekszy bądż rowny
<= mniejszy bądż rowny
== równe
!= rózne

operatory logiczne:

|| or/lub
&& and/i
!  not/nie

A     B           A||B  A && B        !A
f     f            f            f            t
f     t            t        f       
t     f            t        f          f
t     t            t        t
*/

//Napisz program, który pobierze liczbę od uzytkownika i wyswietli czy jest ona dodatnia czy nie
void task1()
{
	int number;
	std::cout << "Podaj liczbe\n";
	std::cin >> number;

	//wersja 1
	if (number > 0)
	{
		std::cout << "Liczba jest dodatnia\n";
	}

	if (number <= 0)
	{
		std::cout << "liczba jest ujemna\n";
	}

	//wersja 2
	if (number > 0)
	{
		std::cout << "Liczba jest dodatna\n";
	}
	else
	{
		std::cout << "liczba jest ujemna lub rowna zero\n";
	}
}

//napisz program, który wczyta liczbe i sprawdzi czy jest ona z zakresu <1;10)
void task2()
{
	int number;
	std::cout << "Podaj liczbe\n";
	std::cin >> number;

	if (number >= 1)
	{
		if (number < 10)
		{
			std::cout << "liczba nalezy do przedziału\n";
		}
		else
		{
			std::cout << "liczba nie nalezy do przedziału\n";
		}
	}
	else
	{
		std::cout << "liczba nie jest w przedziale\n";
	}

	//wersja2
	if (number >= 1 && number < 10)
	{
		std::cout << " liczba jest w zakresie\n";
	}
	else
	{
		std::cout << " liczba nie jest w zakresie\n";
	}
}

//napisz program, który wczyta jedną liczbe i wyswietli wieksza z nich
void task3()
{
	int firstNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> firstNumber;

	std::cout << "Najwieksza wartosc to " << firstNumber << "\n";
}

//napisz program, który wczyta dwie liczby i wyswietli wieksza z nich
void task4()
{
	int secondNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> secondNumber;
	int firstNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> firstNumber;

	if (secondNumber > firstNumber)
		std::cout << "Najwieksza wartosc to" << secondNumber << "\n";
	else
		std::cout << "Najwieksza wartosc to" << firstNumber << "\n";
}

//napisz program, który wczyta trzy liczby i wyswietli wieksza z nich
void task5()
{
	int secondNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> secondNumber;
	int firstNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> firstNumber;
	int thirdNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> thirdNumber;

	if (thirdNumber > firstNumber && thirdNumber > secondNumber)
		std::cout << "Najwieksza wartosc to" << thirdNumber << "\n";
	else
	{
		if (thirdNumber > firstNumber && thirdNumber > secondNumber)
			std::cout << "Najwieksza wartosc to" << secondNumber << "\n";
		else
			std::cout << "Najwieksza wartosc to" << firstNumber << "\n";
	}
}

void task6()
{
	int firstNumber, secondNumber, thirdNumber, fourthNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> thirdNumber;
	std::cout << "podaj liczbe\n";
	std::cin >> fourthNumber;

	if (fourthNumber > firstNumber
		&& fourthNumber > secondNumber
		&& fourthNumber > thirdNumber)
		std::cout << "Najwieksza wartosc to" << fourthNumber << "\n";
	else
	{
		if (thirdNumber > firstNumber && thirdNumber > secondNumber)
			std::cout << "Najwieksza wartosc to" << thirdNumber << "\n";
		else
		{
			if (thirdNumber > firstNumber && thirdNumber > secondNumber)
				std::cout << "Najwieksza wartosc to" << secondNumber << "\n";
			else
				std::cout << "Najwieksza wartosc to" << firstNumber << "\n";
		}
	}
}

//Napisz program który wczyta jedną liczby i wyswieli je w kolejnosci rosnącej
void task7()
{
	int firstNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> firstNumber;

	std::cout << "Liczby w kolejnosci rosnącej:\n";
	std::cout << firstNumber;

	std::cout << "\n";

}

//Napisz program który wczyta dwie liczby i wyswieli je w kolejnosci rosnącej
void task8()
{

	int firstNumber, secondNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> firstNumber;
	std::cin >> secondNumber;
	std::cout << "Podaj liczbe\n";

	std::cout << "Liczby w kolejnosci rosnącej:\n";

	if (firstNumber > secondNumber)
		std::cout << secondNumber << ", " << firstNumber;
	else
		std::cout << firstNumber << ", " << secondNumber;

	std::cout << "\n";

}

//Napisz program który wczyta trzy liczby i wyswieli je w kolejnosci rosnącej
void task9()
{
	int firstNumber, secondNumber, thirdNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> thirdNumber;

	std::cout << "liczby w kolejnosci rosnącej:\n";
	if (thirdNumber < firstNumber
		&& thirdNumber < secondNumber)
	{
		std::cout << thirdNumber << ", ";
		if (secondNumber < firstNumber)
			std::cout << secondNumber << " ," << firstNumber;
		else
			std::cout << firstNumber << " ," << secondNumber;
	}
	else
	{
		if (secondNumber < firstNumber)
		{
			std::cout << secondNumber << " ,";
			if (thirdNumber < firstNumber)
				std::cout << thirdNumber << " , ";
			else
				std::cout << firstNumber << " ," << thirdNumber;
		}
		else
		{
			std::cout << firstNumber << " ," << thirdNumber;
			if (thirdNumber < secondNumber)
				std::cout << thirdNumber << " ," << secondNumber;
			else
				std::cout << secondNumber << ", " << thirdNumber;
		}
	}
	std::cout << "\n";
}




/*
* Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych i sprawdzi, czy są one równe. Wyświetl odpowiedni komunikat.
* Napisz program, który poprosi użytkownika o podanie liczby całkowitej i sprawdzi, czy jest ona parzysta. Wyświetl odpowiedni komunikat.
* Napisz program, który poprosi użytkownika o podanie liczby całkowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyświetl odpowiedni komunikat.

* Napisz program, który poprosi użytkownika o podanie masy ciała (w kilogramach) i wzrostu (w metrach).
Na podstawie tych danych oblicz wskaźnik BMI (Body Mass Index) i wyświetl odpowiedni komunikat informujący o stanie zdrowia.
BMI = masa/wzrost^2
poniżej 16 - wygłodzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowagę
18.5 - 24.99 - wagę prawidłową
25.0 - 29.9 - nadwagę
30.0 - 34.99 - I stopień otyłości
35.0 - 39.99 - II stopień otyłości
powyżej 40.0 - otyłość skrajną

* Napisz program, który poprosi użytkownika o podanie liczby od 1 do 7 i wyświetli odpowiadający mu dzień tygodnia.
* Napisz program, który wczyta numer miesiąca i wyświetli jego słowny odpowiednik.
* Napisz program, który poprosi użytkownika o podanie roku i sprawdzi, czy jest to rok przestępny. Wyświetl odpowiedni komunikat.
* Napisz program, który poprosi użytkownika o podanie liczby całkowitej i obliczy jej wartość bezwzględną. Wyświetl wynik.
* Napisz program, który poprosi użytkownika o podanie wieku i sprawdzi, czy osoba jest pełnoletnia. Wyświetl odpowiedni komunikat.
* Napisz program, który poprosi użytkownika o podanie długości trzech odcinków i sprawdzi, czy można zbudować z nich trójkąt. Wyświetl odpowiedni komunikat.
* Napisz program, który poprosi użytkownika o podanie oceny w skali 100-punktowej i przeliczy ją na ocenę procentową w przedziale od 0 do 100. Wyświetl wynik.
* Program wyświetlający odpowiedni komunikat w zależności od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
* Napisz program, który na podstawie współczynników równania kwadratowego (a, b, c) sprawdzi, czy to równanie ma rozwiązania rzeczywiste, i jeśli tak, to je obliczy.
* Program sprawdzający czy podana data jest poprawna (np. sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)



*/



//Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych i sprawdzi, czy są one równe.Wyświetl odpowiedni komunikat.

void task10()
{
	int firstNumber, secondNumber;
	std::cout << "podaj liczbe\n";
	std::cin >> firstNumber;

	std::cout << "podaj liczbe\n";
	std::cin >> secondNumber;

	if (secondNumber == firstNumber)
		std::cout << "liczby sa takie same";
	else
		std::cout << "liczby nie sa takie same";
}

//Napisz program, który poprosi użytkownika o podanie liczby całkowitej i sprawdzi, czy jest ona parzysta.Wyświetl odpowiedni komunikat.
void task11()
{
	int number;
	std::cout << "podaj liczbe\n";
	std::cin >> number;

	int rest = number % 2;

	if (rest == 0)
		std::cout << "liczba jest parzysta\n";
	else
		std::cout << "liczba nie jest parzysta\n";
}

//Napisz program, który poprosi użytkownika o podanie liczby całkowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyświetl odpowiedni komunikat.
void task12()
{
	int number;
	std::cout << "podaj liczbe\n";
	std::cin >> number;

	int rest1 = number % 3;

	if (rest1 == 0)
		std::cout << "liczba jest podzielna przez 3\n";
	else
		std::cout << "liczba nie jest podzielna przez 3\n";
	int rest2 = number % 5;

	if (rest2 == 0)
		std::cout << "liczba jest podzielna przez 5\n";
	else
		std::cout << "liczba nie jest podzielna przez 5\n";
}


/*Napisz program, który poprosi użytkownika o podanie masy ciała(w kilogramach) i wzrostu(w metrach).
Na podstawie tych danych oblicz wskaźnik BMI(Body Mass Index) i wyświetl odpowiedni komunikat informujący o stanie zdrowia.
BMI = masa / wzrost ^ 2
poniżej 16 - wygłodzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowagę
18.5 - 24.99 - wagę prawidłową
25.0 - 29.9 - nadwagę
30.0 - 34.99 - I stopień otyłości
35.0 - 39.99 - II stopień otyłości
powyżej 40.0 - otyłość skrajną
*/

void task13()
{
	double weight, height, bmi;
	std::cout << "podaj swój wzrost w metrach\n";
	std::cin >> height;
	std::cout << "podaj swoją wage\n";
	std::cin >> weight;

	bmi = weight / (height * height);
	std::cout << "\n";
	std::cout << "twoje bmi wynosi:" << bmi << "\n";

	if (bmi <= 15.99)
	{
		std::cout << "wygłodzenie";
	}
	else
	{
		if (bmi >= 16 && bmi <= 16.99)
		{
			std::cout << "wychudzenie";
		}
		else
		{
			if (bmi >= 17 && bmi <= 18.49)
			{
				std::cout << "niedowagę";
			}
			else
			{
				if (bmi >= 18.5 && bmi <= 24.99)
				{
					std::cout << "wagę prawidłową";
				}
				else
				{
					if (bmi >= 25 && bmi <= 29.9)
					{
						std::cout << "nadwagę";
					}
					else
					{
						if (bmi >= 30 && bmi <= 34.9)
						{
							std::cout << "I stopień otyłości";
						}
						else
						{
							if (bmi >= 35.0 && bmi <= 39.99)
							{
								std::cout << "II stopień otyłości";
							}
							else
							{
								if (bmi >= 35.0 && bmi <= 40.0)
								{
									std::cout << "otyłość skrajną";
								}
							}
						}
					}
				}
			}
		}
	}
}

/*Napisz program, który poprosi użytkownika o podanie liczby od 1 do 7 i wyświetli odpowiadający mu dzień tygodnia.*/
void task14()
{
	int dayOfTheWeek;
	std::cout << "podaj liczbe\n";
	std::cin >> dayOfTheWeek;

	if (dayOfTheWeek == 1)
	{
		std::cout << "poniedziałek";
	}
	else
	{
		if (dayOfTheWeek == 2)
		{
			std::cout << "wtorek";
		}
		else
		{
			if (dayOfTheWeek == 3)
			{
				std::cout << "sroda";
			}
			else
			{
				if (dayOfTheWeek == 4)
				{
					std::cout << "czwartek";
				}
				else
				{
					if (dayOfTheWeek == 5)
					{
						std::cout << "piątek";
					}
					else
					{
						if (dayOfTheWeek == 6)
						{
							std::cout << "sobota";
						}
						else
						{
							if (dayOfTheWeek == 7)
							{
								std::cout << "niedziela";
							}
						}
					}
				}
			}
		}
	}
}

/*Napisz program, który wczyta numer miesiąca i wyświetli jego słowny odpowiednik.*/
void task15()
{
	int mounth;
	std::cout << "podaj liczbe\n";
	std::cin >> mounth;

	if (mounth == 1)
	{
		std::cout << "styczen";
	}
	else
	{
		if (mounth == 2)
		{
			std::cout << "luty";
		}
		else
		{
			if (mounth == 3)
			{
				std::cout << "marzec";
			}
			else
			{
				if (mounth == 4)
				{
					std::cout << "kwiecien";
				}
				else
				{
					if (mounth == 5)
					{
						std::cout << "maj";
					}
					else
					{
						if (mounth == 6)
						{
							std::cout << "czerwiec";
						}
						else
						{
							if (mounth == 7)
							{
								std::cout << "lipiec";
							}
							else
							{
								if (mounth == 8)
								{
									std::cout << "sierpien";
								}
								else
								{
									if (mounth == 9)
									{
										std::cout << "wrzesien";
									}
									else
									{
										if (mounth == 10)
										{
											std::cout << "padziernik";
										}
										else
										{
											if (mounth == 11)
											{
												std::cout << "listopad";
											}
											else
											{
												if (mounth == 12)
												{
													std::cout << "grudzien";
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

/*Napisz program, który poprosi użytkownika o podanie roku i sprawdzi, czy jest to rok przestępny.Wyświetl odpowiedni komunikat.*/
void task16()
{
	int rok;
	std::cout << "podaj rok\n";
	std::cin >> rok;

	int rest = rok % 4;

	if (rest == 0)
		std::cout << "rok jest przestepny\n";
	else
		std::cout << "rok nie jest przestepny\n";
}

/*Napisz program, który poprosi użytkownika o podanie liczby całkowitej i obliczy jej wartość bezwzględną.Wyświetl wynik.*/
void task17()
{

}

/* Napisz program, który poprosi użytkownika o podanie wieku i sprawdzi, czy osoba jest pełnoletnia. Wyświetl odpowiedni komunikat.*/
void task18()
{
	int age;
	std::cout << "podaj wiek\n";
	std::cin >> age;

	if (age >= 18)
		std::cout << "osoba jest pełnoletnia\n";
	else
		std::cout << "osoba jest nie pełnoletnia\n";
}

/*Napisz program, który poprosi użytkownika o podanie długości trzech odcinków i sprawdzi, czy można zbudować z nich trójkąt.Wyświetl odpowiedni komunikat.*/
void task19()
{
	int liczba1;
	std::cout << "podaj 1 liczbe\n";
	std::cin >> liczba1;

	int liczba2;
	std::cout << "podaj 2 liczbe\n";
	std::cin >> liczba2;

	int liczba3;
	std::cout << "podaj 3 liczbe\n";
	std::cin >> liczba3;

	if (liczba1 + liczba2 > liczba3)
		std::cout << "z podanych długosc mozna stworzyc trójkąt\n";
	else
		std::cout << "z podanych długosc nie mozna stworzyc trójkąt\n";
}

/*Napisz program, który poprosi użytkownika o podanie oceny w skali 100 - punktowej i przeliczy ją na ocenę procentową w przedziale od 0 do 100. Wyświetl wynik.*/
void task20()
{
	float number, result;
	std::cout << "Podaj liczbe w skali 0-100\n";
	std::cin >> number;

	if (number >= 0 && number <= 100)
	{
		result = number;
		std::cout << "ocena procentowa:" << result << "%\n";
	}
	else
	{
		std::cout << "podana ocena nie znajduje sie w przedziale";
	}
}

//Program wyświetlający odpowiedni komunikat w zależności od podanej oceny(np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
void task21()
{
	int grade;
	std::cout << "podaj swoją ocene\n";
	std::cin >> grade;

	if (grade == 6)
	{
		std::cout << "ocena celująca\n";
	}
	else
	{

		if (grade == 5)
		{
			std::cout << "ocena bardzo dobra\n";
		}
		else
		{
			if (grade == 4)
			{
				std::cout << "ocena dobra\n";
			}
			else
			{
				if (grade == 3)
				{
					std::cout << "ocena dostateczna\n";
				}
				else
				{
					if (grade == 2)
					{
						std::cout << "ocena dopuszczająca\n";
					}
					else
					{
						if (grade == 1)
						{
							std::cout << "ocena niedostateczna\n";
						}
					}

				}
			}
		}
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
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	//task12();
	//task13();
	//task14();
	//task15();
	//task16();
	//task17();
	//task18();
	//task19();
	//task20();
	task21();
}