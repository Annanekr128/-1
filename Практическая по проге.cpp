// Практическая по проге.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    //ЗАДАНИЕ 1
    cout << "ЗАДАНИЕ 1:\n";
    cout << sizeof(int) << " байт памяти под тип данных int\n";
    cout << sizeof(short int) << " байт памяти под тип данных short int\n";
    cout << sizeof(unsigned short int) << " байт памяти под тип данных unsigned short int\n";
    cout << sizeof(long int) << " байт памяти под тип данных long int\n";
    cout << sizeof(float) << " байт памяти под тип данных float\n";
    cout << sizeof(double) << " байт памяти под тип данных double\n";
    cout << sizeof(long double) << " байт памяти под тип данных long double\n";
    cout << sizeof(char) << " байт памяти под тип данных char\n";
    cout << sizeof(bool) << " байт памяти под тип данных bool\n";
    cout << '\n';

    //ЗАДАНИЕ 2
    cout << "ЗАДАНИЕ 2:\n";
    cout << "Введите число типа int: ";
    int integer;
    cin >> integer;
    unsigned int mask = 1 << (sizeof(int) * 8 - 1);
    cout << "Двоичное представление в памяти целого числа " << integer << ":  ";
    for (int i = 1; i <= sizeof(int) * 8; i++, mask >>= 1)
    {
        if (integer & mask)
            cout << '1';
        else
            cout << '0';
        if (i == 1 || i % 8 == 0)
            cout << ' ';
    }

    //ЗАДАНИЕ 3
    cout << '\n';
    cout << '\n' << "ЗАДАНИЕ 3:\n";
    cout << "Введите число типа float: ";
    union
    {
        float typefloat;
        int ib;
    };
    cin >> typefloat;
    //cout << &typefloat << ' ' << &ib << '\n';
    //cout << typefloat << ' ' << ib << '\n';
    mask = 1 << (sizeof(float) * 8 - 1);
    cout << "Двоичное представление в памяти вещественного числа " << typefloat << ":  ";
    for (int i = 1; i <= sizeof(float) * 8; i++, mask >>= 1)
    {
        if (ib & mask)
            cout << '1';
        else
            cout << '0';
        if (i == 1 || i ==9 )
            cout << ' ';
    }
    
    //ЗАДАНИЕ 4
    cout << '\n';
    cout << '\n' << "ЗАДАНИЕ 4:\n";
    cout << "Введите число типа double: ";
    union
    {
        double typedouble;
        unsigned int part[2];
    };
    cin >> typedouble;
    cout << "Двоичное представление в памяти числа " << typedouble << " типа double: \n";
    mask = 1 << (sizeof(int) * 8 - 1);
    for (int nomber = 1; nomber >= 0; --nomber)
    {
        for (int i = 1; i <= sizeof(int) * 8; i++, mask >>= 1)
        {
            if (part[nomber] & mask)
                cout << '1';
            else
                cout << '0';
        }
        mask = 1 << (sizeof(int) * 8 - 1);
    }
    cout << '\n';
    return 0;
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
