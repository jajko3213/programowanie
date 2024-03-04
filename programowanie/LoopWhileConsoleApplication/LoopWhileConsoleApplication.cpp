
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
}

int main()
{
    std::cout << "Hello World!\n";
}