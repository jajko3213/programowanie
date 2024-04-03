#include <iostream>

//Napisz program który pobierze znak od użytkownika i wyświeli go.
void task1()
{
    char characterFromUser;
    std::cout << "Podaj jeden znak:\n";
    std::cin >> characterFromUser;

    std::cout << "Podano: " << characterFromUser << "\n";

    characterFromUser = characterFromUser + 1;

    std::cout << "Podano: " << characterFromUser << "\n";

    characterFromUser = 97;
    characterFromUser = 'a';
    characterFromUser = 'a' + 1; // 'b'
}

void task2()
{
    char characterFromUser;
    std::cout << "Podaj jeden znak:\n";
    std::cin >> characterFromUser;

    if (characterFromUser == 'a')
        || characterFromUser == 'b'
        || characterFromUser == 'c'
        || characterFromUser == 'd'
        //...
        || characterFromUser == 'z'
    {
        std::cout << "Podales mala litere alfabetu";
    }
    else
    {
        std::cout << "Podales inny znak";
    }

    //wersja 2
    if (characterFromUser >= 97 && characterFromUser <= 122)
    {
        std::cout << "Podales mala liczbe alfabetu";
    }
    else
    {
        std::cout << "Podales inny znak";
    }
}

void task3()
{
    std::string userName;
    std::cout << "Podaj swoje imie";
    std::cin >> userName;

    std::cout << "Witaj" << userName << "tutaj";
}

void task4()
{
    std::string password;
    std::cout << "Podaj haslo";
    std::cin << password;

    if (password == "abc123")
    {
        std::cout << "haslo poprawne";
    }
    else
        std::cout << "haslo niepoprawne";

}

int main()
{
    task1();
    task2();
}