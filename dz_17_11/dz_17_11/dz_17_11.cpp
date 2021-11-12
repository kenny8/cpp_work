//Из методички 3 № 35
#include <iostream>
#include <vector>
using namespace std;
int dz_1(float m = 0.5);
int dz_2(int x = 55);
int count_num(int x);
int dz_35(int x = 135);

int main()
{
    setlocale(LC_ALL, "RUS");
    float  m;
    int num;
    int num1;
    cout << "Привет %username%\n";

    cout << "Дано вещественное число 0<m<1. Получить наименьшее целое i.\n";
    cin >> m;
    cout << dz_1(m) << "\n";
    cout << "\n";

    cout << "Найти произведение цифр числа, введённого с клавиатуры\n";
    cin >> num;
    cout << dz_2(num) << "\n";
    cout << "\n";
 
    cout << "Дано натуральное число n. Поменять местами первую и последнюю цифры числа n\n";
    cin >> num1;
    cout << dz_35(num1);

}


int dz_1(float m)
{
    int i = 1;
    while (true)
    {
        if (1 / pow(2, i) < m) 
        {
            break;
        }
        i++;
    }
    return i;
}


int dz_2(int x)
{
    int produc = 1;
    int num = count_num(x) - 1;
    x = abs(x);
    for (int i = num; i > -1; i--)
    {
        if (i == 0)
            produc *= x;
        else
            produc *= int(x / pow(10, i));
        x = abs(x - int(x / pow(10, i)) * pow(10, i));
    }
    return produc;
}


int dz_35(int x)
{
    vector<int> old_num;
    int new_num = 0;
    int k = 0;
    int num = count_num(x) - 1;
    x = abs(x);

    for (int i = num; i > -1; i--)
    {
        if (i == 0)
            old_num.push_back(x);
        else
            old_num.push_back(int(x / pow(10, i)));
        x = abs(x - int(x / pow(10, i)) * pow(10, i));
    }

    for (int i = num; i > -1; i--)
    {
        if (i == num)
            new_num += old_num[num] * pow(10,i);
        else if (i == 0)
            new_num += old_num[0] * pow(10, i);
        else
            new_num += old_num[k] * pow(10, i); 
        k++;
    }
    return new_num;
}


int count_num(int x)
{
    int count = 0;
    while (x != 0)
    {
        x /= 10;
        count++;
    }
    return count;
}