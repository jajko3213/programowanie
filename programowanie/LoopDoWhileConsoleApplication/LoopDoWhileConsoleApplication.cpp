#include <iostream>

//Napisz program, ktory wylosuje liczbe
//a nastepnie uzytkownik bedzie musial ja zgadnac

void task1()
{
    int randomNumber;

    srand(time(0));
    randomNumber = rand();

    //std::cout << "Liczba losowa" << randomNumber << "\n";

    int numberFromUser;

    /* std::cout << "Podaj liczbe: \n";
     std::cin >> numberFromUser;
     if (numberFromUser != randomNumber)
     {
         std::cout << "Podaj liczbe:\n";
         std::cin >> numberFromUser;
         if (numberFromUser != randomNumber)
         {
             std::cout << "Podaj liczbe:\n";
             std::cin >> numberFromUser;
             if (numberFromUser != randomNumber)
             {
                 //...
             }
         }
     }
 }*/

    do
    {
        std::cout << "Podaj liczbe:\n";
        std::cin >> numberFromUser;

        if (numberFromUser > randomNumber)
            std::cout << "za duza liczba\n";
        if (numberFromUser < randomNumber)
            std::cout << "Za mala liczba\n";
    } while (numberFromUser != randomNumber);

     std::cout << "gratulacje zgadles liczbe";

}
int main()
{
    task1();
}

