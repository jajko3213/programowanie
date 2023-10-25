// VariableConsolApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void task2()
{
    float lenghtInMeterFromUser;
    std::cout << "Podaj dlugosc w metrach. \n";
    std::cin >> lenghtInMeterFromUser;

    float lenghtInCentimeter; 
    lenghtInCentimeter = lenhtInMeterFromUser / 100;

}

void task1()
{
    short ageFromUser;
    std::cout << "Podaj swoj wiek. \n";
    std::cin >> ageFromUser;

    std::cout << "Masz " << ageFromUser << " lat. \n";

}

int main()
{
    //task1();
    task2();
 }

