// LAB2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <cstdlib>
#include <iostream>
#include <ctime>
#include "funcs.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    srand(time(nullptr));
    int n = 10;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = (1+rand() % 200) - 100;
        cout << arr[i] << endl;
    }
    
    cout << "Выберете действие с массивом:\n";
    cout << "1)Избавиться от минусов в массиве\n2)Поменять все значения на 5\n3)Случайно поменять значения массива\n4)Инвертировать массив\n";
    int choice;
    if (!(cin >> choice) || getchar() != '\n')
    {
        cout << "\nОшибка ввода\n";
        return 0;
    }
    switch (choice)
    {
    case 1:
        transform(arr, n, change_negative);
        break;
    case 2:
        transform(arr, n, change_to_five);
        break;
    case 3:
        transform(arr, n, change_to_random);
        break;
    default:
        break;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
