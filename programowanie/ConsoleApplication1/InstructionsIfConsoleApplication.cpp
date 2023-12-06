
#include <iostream>



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

//wersja 2

if (number > 0)
{
    std::cout << "Liczba jest dodatnia\n";
}

else
{
    std::cout << "Liczba jest ujemna lub wynosi zero\n";
}

int main()
{
    task1();
}