// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int  factorial(long int x);
float sin_1(int x = 1, int y = 10);
float sin_2(float x = 0.1, float y = 1.1);
void snow(int a);



int main()
{
    setlocale(LC_ALL, "RUS");
    int dz;
    bool work = true;
    cout << "привет!\n";
    while (work)
    {
        cout << "выбери дз, написав номер с 1 по 4. Для выхода из программы введите 5.\n";
        cin >> dz;
        switch (dz)
        {
        case 1:
            cout << "задание: !10\n";
            cout << factorial(10) << "\n";
            break;
        case 2:
            cout << "задание: квадрат из *\n";
            snow(10);
            cout << "\n";
            break;
        case 3:
            cout << "задание: sin(1/1)+...+sin(10/10)\n";
            cout << sin_1();
            cout << "\n";
            break;
        case 4:
            cout << "задание: sin(0.1)+...+sin(1.1)\n";
            cout << sin_2();
            cout << "\n";
            break;
        case 5:
            work = false;
            cout << "До свидания\n";
            break;
        default:
            cout << "вы ошиблись\n";
            break;
        }
    }    
}


int  factorial(long int x)
{
    int y = x;
    for (int i = 1; i < y; i++)
    {
        x *= i;
    }
    return x;
}


void snow(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int i = 0; i < a; i++)
        {
            cout << '*';
        }
        cout << '\n';
    }
}


float sin_1(int x, int y)
{
    float z = 0;
    for (int i = x; i < y + 1; i++)
    {
        z += sin(i/i);
    }
    return z;
}


float sin_2(float x, float y)
{
    float z = 0;
    for (float i = 0.1; i < y + 0.1; i+=0.1)
    {
        z += sin(i);
    }
    return z;
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
