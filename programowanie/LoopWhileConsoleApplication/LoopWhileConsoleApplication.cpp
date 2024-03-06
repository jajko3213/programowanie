
#include <iostream>

//napisz program, ktory policzy sume cyfr podanej przez uzytkownika liczby

void task1()
{
    int number;
    do
    {
        std::cout << "Podaj liczbe dodatnia";
        std::cin >> number;
    } while (number < 0);

    int numberOfDigit = 1;

    /*
    if (number > 9);
    {
        number = number / 10;
        numberOfDigit++;
        if (number > 9);
        {
            number = number / 10;
            numberOfDigit++;
            if (number > 9);
            {
                number = number / 10;
                numberOfDigit++;
                if (number > 9);
                {
                    number = number / 10;
                    numberOfDigit++;
                }
            }
        }
    }
}
*/

    while (number > 9)
    {
        number = number / 10;
        numberOfDigit++;
    }

     std::cout << "Ilosc cyfr w liczbie wynosi: " << numberOfDigit << "/n";
}

    //napisz program ktory policzy nwd dwoch liczb 
void task2()
{
    int a;
   
        std::cout << "podaj pierwsza liczbe/n";
        std::cin >> a;

    int b;
        std::cout << "podaj druga liczbe/n";
        std::cin >> b;

    if (b != 0)
    {
        int tmpA = a;
        a = b;
        b = tmpA % b;

    }

    std::cout << "NWD = " << a << "/n";

}

//Miasto T. ma obecnie 100 tys. mieszkańców, ale jego populacja rośnie co roku o 3% rocznie. 
//Miasto B. ma 300 tys. mieszkańców i ta liczba rośnie w tempie 2% na rok.
// Wykonaj symulację prezentującą liczbę mieszkańców w obu miastach i zatrzymującą się, 
// gdy liczba mieszkańców miasta T. przekroczy liczbę z miasta B.

void task3()
{
    int miastoT = 100000;
    
    int miastoB = 300000;

    double wzrostT = 0.03;
    double wzrostB = 0.02;

    int rok = 1;

    do
    {
        miastoT = miastoT + miastoT * wzrostT;
        miastoB = miastoB + miastoB * wzrostB;
        rok++;

        std::cout << "rok" << rok << "\n";

        std::cout << "liczba mieszkancow miasta T wynosi" << miastoT << "\n";

        std::cout << "liczba mieszkancow miasta B wynosi" << miastoB << "\n";

    } while (miastoT > miastoB);
}

int main()
{
    task3;
}