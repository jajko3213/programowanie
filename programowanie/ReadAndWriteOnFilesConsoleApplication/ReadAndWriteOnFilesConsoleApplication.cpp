#include <iostream>
#include <fstream>

void task1()
{
    std::string name;
    int age;

    std::cout << "Podaj imi�:\n";
    std::cin >> name;

    std::cout << "Podaj sw�j wiek:\n";
    std::cin >> age;

    std::ofstream writeInFile;
    writeInFile.open("c:\\dane.txt", std::ios::app);

    if (writeInFile.is_open() == true)
    {
        writeInFile << name;
        writeInFile << "\n";
        writeInFile.flush();
        writeInFile << age << "\n";

        writeInFile.close();
    }
    else
        std::cout << "B��d otwarcia pliku\n";
}

//Odczyt zpliku tekstowego
void task2()
{
    std::string name;
    int age;
    std::ifstream readFromFile;
    readFromFile.open("c:\\dane.txt");
    if (readFromFile.is_open())
    {
        while (readFromFile.eof() == false)
        { 
            readFromFile >> name;
            readFromFile >> age;

            std::cout << "Imie: " << name << " ,wiek: " << age << "\n";
            readFromFile.close();
        }
    }
}

//Program zapisuj�cy do pliku imie, drugie imie, Nazwisko i wiek. Po drugim imieniu ma opr�ni� bufor.
void task3()
{
    std::string name;
    std::string secondName;
    std::string surname;
    int age;
    
    std::cout << "Podaj swoje imi�:\n";
    std::cin >> name;

    std::cout << "Podaj swoje drugie imi�:\n";
    std::cin >> secondName;

    std::cout << "Podaj swoje nazwisko imi�:\n";
    std::cin >> surname;

    std::cout << "Podaj sw�j wiek:\n";
    std::cin >> age;

    std::ofstream writeInFile;
    writeInFile.open("C:\\Users\dawid\Desktop\dane.txt", std::ios::app);
    if (writeInFile.is_open() == true)
    {
        writeInFile << name;
        writeInFile << "\n";
        writeInFile << secondName;
        writeInFile << "\n";
        writeInFile.flush();
        writeInFile << surname;
        writeInFile << "\n";
        writeInFile << age;

        writeInFile.close();
    }
    else
        std::cout << "PROBLEM!!!";
}

//Program odczytuj�cy dane z pliku i wy�wietli je.
void task4()
{
    std::string name;
    std::string secondName;
    std::string surname;
    int age;

    std::ifstream readFromFile;
    readFromFile.open("C:\\Users\dawid\Desktop\dane.txt");
    if (readFromFile.is_open() == true)
    {
        while (readFromFile.eof() == false)
        {
            readFromFile >> name;
            readFromFile >> secondName;
            readFromFile >> surname;
            readFromFile >> age;

            std::cout << "Masz na imi�: " << name << ", twoje drugie imi� to: " << secondName << " na nazwisko masz: " << surname << " tw�j wiek to: " << age << "\n";

            readFromFile.close();
        }
    }
    else
        std::cout << "PROBLEM!!!";
}

//Napisz program kt�ry wygeneruje losow� ilo�� liczb losowych i zapisze je do pliku tekstowego.

void task5()
{
    srand(time(NULL));
    std::ofstream writeInFileNumbers;
    writeInFileNumbers.open("c:\\liczby.txt", std::ios::app);
    int randomNumberCount = rand() % 10 + 1;
    if (writeInFileNumbers.is_open())
    {
        for (int i = 0; i < randomNumberCount; i++)
        {
            writeInFileNumbers << rand() % 1000 << "\n";
        }
        writeInFileNumbers.close();
    }
    else  
        std::cout << "B��D PLIKU!";
}

//Napisz program, kt�ry odczyta liczby z wcze�niejszwgo pliku i znajdzie liczb� maksymaln�. 
void task6()
{
    std::ifstream readFromFileNumbers;
    readFromFileNumbers.open("c:\\liczby.txt");
    if (readFromFileNumbers.is_open())
    {
        int max = 0;
        int numberFromFile;
        while (readFromFileNumbers >> numberFromFile)
        {
            if (numberFromFile > max)
                max = numberFromFile;
        }
        readFromFileNumbers.close();

        std::cout << "Najwi�ksza liczba to: " << max;
    }
    else
        std::cout << "B��D PLIKU!";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task5();
}

/*
Dane s� buforowane, kiedy bufor si� przepe�ni wysy�a dane do pliku.
Metoda flush wymusza opr�nienie bufora.
Metoda close wywo�uje metode flush.
Kartk�wka z tego materia�u 17.10.2024.

-------------------------------------------------------------------

Proste zapisywanie danych do pliku.

Aby zapisa� jakie� dane do pliku nale�y podpi�� bibliotek� #include <fstream> ,
stworzy� zmienne i zapisa� w nich dane, nast�pnie tworzymy zmienn� ze specjaln�
klas� std::ofstream lub std::infstream. Otwieramy plik poprzez wywo�ane metody open 
(w niej ma sie znale�� �cie�ka do pliku oraz inne parametry w zale�no�ci co chcemy zrobi�).
Ma ona siedem przeci��e� -> "overload". Nast�pnie sprawdzamy czy plik zosta� otwarty 
wywo�uj�c metod� is_open zwraca on typ logiczny bool. Je�li uda�o si� otworzy� plik to 
zapisujemy do plik dane. np. writeInFile << name; Operator "<<" oznacza, �e wysy�amy z konsoli
do pliku dane. Po wykonaniu zada� zamykamy plik metod� close.

Proste odczytywanie z pliku.

Nale�y podpi�� bibliotek� #include <fstream> oraz stworzy� zmienne, kt�re pasuj� do struktury 
danych w pliku np w pliku jest: Adam 80 Ewa 20. Oznacza to, �e nale�y stworzy� zmienn� na imi� oraz 
wiek. Tworzymy zmienn� o specjalnym typie ifstream. Nast�pnie otwieramy plik metod� open.
I sprawdzamy czy uda�o si� otworzy� plik metod� is_open. Je�li si� uda�o to mo�na sprawdzi�
czy plik nie jest pusty p�tl� while, je�li jest pusty to plik si� zamknie, a je�li s� dane
to odczyta te dane z pliku poprzez specjaln� zmienn� 
np. readFromFile >> name. Operator ">>" oznacza, �e wysy�amy dane z pliku
na konsol�. Nast�pnie zamykamy plik. Aby sprawdzi� czy plik nie jest pusty wyko�ystujemy
metod� eof czyli end of file. Warunek readFromFile.eof() == false.
Kursor po otwarciu pliku ustawia si� na pocz�tku, przeskakuje on, gdy napotka pierwszy znak bia�y.

Je�li nie ma pliku to zostanie stworzony. Je�li podamy z�� �cie�k� nie istniej�cy dysk lub pomylimy
si� w folderach lub je�li nie mamy uprawnie� do otwierania, odczytywania lub modyfikacji
pliku to plik si� nie otworzy.
*/


