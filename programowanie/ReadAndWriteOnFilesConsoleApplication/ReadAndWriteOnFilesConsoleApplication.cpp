
#include <iostream>

void task1()
{
    std::string name;
    int age;

    std::cout << "Podaj imie";
    std::cin << name;

    std::cout << "Podaj wiek";
    std::cin >> age;

    std::ofstream writeInFile;
    writeInFile.open("g:\\dane.txt");

    if (writeInFile.is_open() == true)
    {
        //praca na pliku
        writeInFile << name;
        writeInFile << "\n";
        writeInFile << age;

        writeInFile.close();
    }
}

int main()
{
    std::cout << "Hello World!\n";
}
