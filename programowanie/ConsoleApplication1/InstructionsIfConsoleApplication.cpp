
#include <iostream>

/*
Operatory porównania:
>   większośći
<   mniejszości
>=  większe bądź równe
<=  mniejsze bądź równe
==  równe
!=  różne

Operatory logiczne:

||  or/lub
&&  and/i

*/

void task1()
{
    int number;
    std::cout << "Podaj liczbe \n";
    std::cin >> number;

    if (number > 0);
    {  
        std::cout << "Liczba jest dodatnia \n";
    }

    if (number <= 0);
    {
        std::cout << "Liczba jest ujemna\n";
    }
}


void task2()
{
    int number;
    std::cout << "Podaj liczbe \n";
    std::cin >> number;

    if (number <= 1)
    {
        if (number < 10)
        {
            std::cout << "Liczba jest w zakresie\n";
        }
        else
        {
            std::cout << "Liczba nie jest w zakresie\n";
        }
    }
    else
    {
        std::cout << "Liczba nie jest w zakresie\n";
    }

    //wersja 2

    if(number >= && number)
}

//Napisz program ktory wczyta jedna liczbe i wyswietli wieksza z nich.

void task3()
{
    int firstNumber;
    std::cout << "Podaj liczbe\n";
    std::cin >> firstNumber;

    std::cout << "Najwieksza wartosc to" << firstNumber << "\n";
}
void task4()
{
    int firstNumber, secondNumber;
    std::cout << "podaj liczbe\n";
    std::cin >> firstNumber;
    std::cout << "podaj liczbe\n";
    std::cin >> secondNumber;

    if (secondNumber > firstNumber)
        std::cout << "Najwieksza wartosc to " << "\n";
    else
        std::cout << "najwieksza wartosc to " << firstNumber << "\n";
    
}

void task6()
{
    int firstNumber, secondNumber, thirdNumber, fourthNumber;
    std::cout << "podaj liczbe\n";
    std::cin >> firstNumber;
    std::cout << "podaj liczbe\n";
    std::cin >> secondNumber;
    std::cout << "podaj liczbe\n";
    std::cin >> thirdNumber;
    std::cout << "podaj liczbe\n";
    std::cin >> fourthNumber;

    if (fourthNumber > secondNumber
        && fourthNumber > secondNumber
        && fourthNumber > thirdNumber)
        std::cout << "Największa wartość to " << fourthNumber << "\n";
    else
    {
        if (thirdNumber > firstNumber && thirdNumber > secondNumber)
            std::cout << "Największa wartość to " << thirdNumber << "\n";
        else
        {
            if (secondNumber > firstNumber)
                std::cout << "Najwieksza wartosc to " << secondNumber << "\n";
            else
                std::cout << "Najwieksza wartosc to " << firstNumber << "\n";
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
    task6();





}