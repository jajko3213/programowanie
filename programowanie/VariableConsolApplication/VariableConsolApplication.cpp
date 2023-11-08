// VariableConsolApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/*
* Napisz program, który poprosi użytkownika o podanie długości boku a i b prostokąta, a następnie obliczy i wyświetli pole prostokąta.
* Napisz program, który poprosi użytkownika o podanie długości podstawy i wysokości trójkąta, a następnie obliczy pole tego trójkąta, wyświetlając wynik.
* Napisz program, który poprosi użytkownika o podanie promienia koła i obliczy pole tego koła, wyświetlając wynik.
* Napisz program, który poprosi użytkownika o podanie długości podstawy a, podstawy b i wysokości h trapezu, a następnie obliczy pole tego trapezu, wyświetlając wynik.
* Napisz program, który poprosi użytkownika o podanie długości krawędzi sześcianu i obliczy jego objętość, wyświetlając wynik.
* Napisz program, który poprosi użytkownika o podanie temperatury w stopniach Celsiusza, a następnie przeliczy ją na stopnie Fahrenheita i wyświetli wynik.
* Napisz program, który konwertuje wprowadzoną kwotę w jednej walucie na inną, korzystając z określonego kursu wymiany.
* Napisz program, który poprosi użytkownika o podanie dwóch liczb (a, b) i obliczy średnią arytmetyczną tych liczb. Następnie wyświetli wynik.
* Napisz program, który poprosi użytkownika o podanie trzech liczb (a, b, c) i obliczy średnią arytmetyczną tych liczb. Następnie wyświetli wynik.
* Program obliczający średnią ważoną trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
* Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych. Następnie wykona operacje (+, -, *, /) i wyświetli wyniki.
* Napisz program, który poprosi użytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wyświetlając wynik.
* Napisz program, który poprosi użytkownika o podanie współrzędnych (x1, y1) i (x2, y2) dwóch punktów w układzie kartezjańskim, a następnie obliczy odległość między nimi, wyświetlając wynik.
*/

void task2()
{
    float lenghtInMeterFromUser;
    std::cout << "Podaj dlugosc w metrach. \n";
    std::cin >> lenghtInMeterFromUser;

    float lenghtInCentimeter; 
    lenghtInCentimeter = lenghtInMeterFromUser * 100;

    float lenghtInMilimeter = lenghtInCentimeter * 10;
    
    float lenghtInKilometer = lenghtInMeterFromUser / 1000;

    std::cout << "Metry: " << lenghtInMeterFromUser << "\n";
    std::cout << "Centymetry: " << lenghtInCentimeter << "\n";
    std::cout << "Kilometry: " << lenghtInKilometer << "\n";
    std::cout << "Milimetry: " << lenghtInMilimeter << "\n";
}

void task1()
{
    short ageFromUser;
    std::cout << "Podaj swoj wiek. \n";
    std::cin >> ageFromUser;

    std::cout << "Masz " << ageFromUser << " lat. \n";

}

/* Napisz program, który poprosi użytkownika o podanie długości boku a i b prostokąta, a następnie obliczy i wyświetli pole prostokąta.*/

void task3()
{
    float sideA;
    std::cout << "Podaj długość boku A. \n";
    std::cin >> sideA;

    float sideB;
    std::cout << "Podaj długośc boku B. \n";
    std::cin >> sideB;

    float areaOfRectangle = sideA * sideB;

    std::cout << "Pole prostokąta wynosi: " << areaOfRectangle << "\n";
    

    
}

/* Napisz program, który poprosi użytkownika o podanie długości podstawy i wysokości trójkąta, a następnie obliczy pole tego trójkąta, wyświetlając wynik.*/

void task4()
{
    float theBaseOfTriangle;
    std::cout << "Podaj długość podstawy \n";
    std::cin >> theBaseOfTriangle;

    float heightOfTriangle;
    std::cout << "Podaj wysokość trójkąta";
    std::cin >> heightOfTriangle;

    float areaOfTriangle = theBaseOfTriangle * heightOfTriangle / 2;


    std::cout << "Pole trójkąta wynosi: " << areaOfTriangle << "\n";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
    //task2();
    //task3();
    task4();
 }

