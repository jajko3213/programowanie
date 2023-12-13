
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

    if(number >= && number
}

int main()
{
    //task1();
    task2();
}