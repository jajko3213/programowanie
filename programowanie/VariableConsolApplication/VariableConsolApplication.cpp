// VariableConsolApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
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

int main()
{
    //task1();
    task2();
 }

