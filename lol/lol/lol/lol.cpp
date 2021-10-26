#include <iostream>
using namespace std;
int  dz_1();
void dz_2();
float dz_3();
float dz_4();




int main()
{
    setlocale(LC_ALL, "RUS");

    cout << "задание: 10!\n";
    cout << dz_1() << "\n";
    cout << "\n";

    cout << "\n";
    cout << "задание: квадрат из *\n";
    dz_2();
    cout << "\n";

    cout << "\n";
    cout << "задание: sin(1/1)+...+sin(10/10)\n";
    cout << dz_3();
    cout << "\n";

    cout << "\n";
    cout << "задание: sin(0.1)+...+sin(1.1)\n";
    cout << dz_4();
    cout << "\n";
}


int  dz_1()
{
    long int x = 10;
    for (int i = 1; i < 10; i++)
    {
        x *= i;
    }
    return x;
}


void dz_2()
{
    int x = 10;
    for (int i = 0; i < x; i++)
    {
        for (int i = 0; i < x; i++)
        {
            cout << '*';
        }
        cout << '\n';
    }
}


float dz_3()
{
    int x = 10;
    float z = 0;
    for (int i = 1; i < x + 1; i++)
    {
        z += sin(i / i);
    }
    return z;
}


float dz_4()
{
    float x = 1.1;
    float z = 0;
    for (float i = 0.1; i < x + 0.1; i += 0.1)
    {
        z += sin(i);
    }
    return z;
}