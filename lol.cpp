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
        z += sin(i / i);
    }
    return z;
}


float sin_2(float x, float y)
{
    float z = 0;
    for (float i = 0.1; i < y + 0.1; i += 0.1)
    {
        z += sin(i);
    }
    return z;
}