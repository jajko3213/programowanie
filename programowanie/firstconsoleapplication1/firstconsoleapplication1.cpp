// firstConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//Napisz programn ktory wczyta od uzytkownika jego wiek a nastepnie wyswietlil go w konsoli

int main()
{
    std::cout << "Hello World!.\n";
    std::cout << "ebebebebebebeb \n";
    std::cout << 'X'; // stała znakowa - musi być jeden znak
    std::cout << "\n"; 
    std::cout << '\n';
    std::cout << 257 << "\n";
    //stała liczbowa całkowita
        std::cout << 12.5 << "\n"; //stała liczbowa rzeczywista
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
 /*
 Algorytm - skończony zbiór instrukcji realizujących postawione przez nie zadanie.
 Kolejnośc instrukcji w zbiorze
 Sposób zapisu:
 * w punktach
 * opis słowny
 * język programowania
 * zbiór rysunkowa
 * schemat blokowy

 Zmienna - jest to pewien obszar pamięci slużacy do przechowywania danych. Te dane można modyfikować
 Zmienna pozwala pechować tylka jedna wartosc w danym momencie czasu

 Deklaracja zmiennej - moment jej utworzenia

 typ_zmiennej - mówi o wielkości obszaru pamieci i rodzaju przechowywania danych
 short          liczby calkowite ze znakiem 2 bajty <-32 768; 32 727>
 int/long       liczby calkowite ze znakiem 4 bajty <-2 147 483 648; 2 147 483 647>
 long long      liczby calkowite ze znakiem 8 bajtow <-9 223 372 036 854 775 808; 9 223 372 036 854 775 807>

 Jezeli przed powyzszymi typami dodamy slowo "unsigned" to zakres jest od zera do podwojonego zakresu gornego plus 1.

 float          liczby rzeczywiste ze znakiem   4 bajty
 double         liczby rzeczywiste ze znakiem   8 bajtow
 long double    liczby rzeczywiste ze znakiem   12 bajtow

 Nazwa zmiennej - nazwa obszaru pamieci. Poprzez te nazwe odwolujemy sie do tego obszaru.

 Wymagania kompilatora wzgledna nazwy:
 * uzycie tylko dozwolonych znakow
    - alfabet angielski od A-Z
    - cyfry arabskie 0-9
    - podkreślenie (podloga)
 * pierwszym znakiem nie moze byc cyfra
 * nie moze byc to slowo kluczowe danego jezyka programowania
 * musi byc unikalna w danej widocznosci
 
 Wymagania programistow
 *Jezeli nazwa sie sklada z wielu wyrazow to zamiast spacji
    - uzywamy znaku podkreslenia first_number_fom_user
    - stosujemy camel case, czyli piszemy wszystko razem a slowa (zaczynamy od drugiego)
    zaczynamy z duzej litery np.firstNumberFromUser
 * nazwa zmiennej musi oddawac charakter przechowywanych danych, czyli miec znaczenie
 * nazwy po angielsku
 */