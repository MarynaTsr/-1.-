

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    system("color F5");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Прізвище
    string last_name;
    cout << "Введіть прізвище: ";
    getline(cin, last_name);

    // Ім'я
    string first_name;
    cout << "Введіть ім'я: ";
    getline(cin, first_name);

    // Вік
    int age;
    cout << "Введіть вік: ";
    cin >> age;
    cin.ignore(); // Очищення буфера після введення числа

    // Місце проживання
    string address;
    cout << "Введіть місце проживання: ";
    getline(cin, address);

    // Вивід введених даних
    cout << "\nВаші дані:" << endl;
    cout << "Прізвище: " << last_name << endl;
    cout << "Ім'я: " << first_name << endl;
    cout << "Вік: " << age << endl;
    cout << "Місце проживання: " << address << endl;

    return 0;
}

