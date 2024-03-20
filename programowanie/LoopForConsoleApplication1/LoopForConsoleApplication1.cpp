// LoopForConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/*
* Program obliczający sumę liczb od 1 do 100
* Program sprawdzający czy podana liczba jest liczbą doskonałą (czyli taką, której suma dzielników (z wyłączeniem samej siebie) jest równa danej liczbie, np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).
* Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
* Program obliczający n!.
* Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
* Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
* Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
* Program obliczający sumę kwadratów liczb od 1 do 10
* Program, który wczyta podstawę oraz wykładnik oraz wyliczy wynik.
* Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu (ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)

* Program, kóry wyświetli poniższe wzory:
    ****     *       54321        121212        122333
    ***     ***      65432        212121        223334444
    **     *****     76543        121212        333444455555
    *     *******    87654        212121        444455555666666

* Oblicz sumę szeregu 1/1^2 + 1/2^2 + 1/3^2 + ... +1/n^2. Jeżeli się nie pomylisz, to dla odpowiednio dużej wartości n po przemnożeniu jej przez 6 i spierwiastkowaniu powinieneś otrzymać wartość liczby π (suma szeregu jest równa π2/6). Zwróć uwagę, że pierwsza wartość indeksu to 1, a nie 0. Dokładność obliczeń można sprawdzić porównując z wartością odczytaną z własności Math.PI.

* Napisz program, który rozkłoży liczbę na czynniki pierwsze.

*/

void task1()
{
    int width, height;
    std::cout << "Podaj wysokosc\n";
    std::cin >> height;
    std::cout << "Podaj szerokosc\n";
    std::cin >> width;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            std::cout << "X";
        }
        std::cout << "\n";
    }
}

// Program obliczający sumę liczb od 1 do 100
void task2()
{
    int suma = 0;

    for (int i = 1; i <= 100; ++i)
    {
        suma += i;
    }

    std::cout << "suma liczb od 1 do 100 wynosi: " << suma << "\n";

}

//Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)

void task3()
{
    for (int i = 1; i <= 10; ++i)
    {
        std::cout << "kwadrat liczby" << i << "to" << i * i << "\n";
    }
}

//Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).

void task4()
{
    for (int i = 1; i <= 9; ++i)
    {
        for (int j = 1; j <= 9; ++j)
        {
            std::cout << i << " * " << j << " = " << i * j << "\n";
        }
    }
}

//Program, który wczyta podstawę oraz wykładnik oraz wyliczy wynik.
void task5()
{

}

//Program obliczający sumę kwadratów liczb od 1 do 10

void task6()
{
    int sumOfSquares = 0;

    for (int number = 1; number <= 10; number++)
    {
        sumOfSquares += number * number;
    }

    std::cout << "Suma kwadratow liczb od 1 do 10 wynosi:" << sumOfSquares << "\n";
}



int main()
{
    task6();

}
