//Из методички 3 № 18, 19, 44
#include <iostream>
#include <vector>
using namespace std;
int dz_18();
int dz_19(int n, bool div = false);// div = true показывает делители
vector<int> dz_44(int a, int b);// x - первоезначение, y - последнее значение 

int main()
{
    int answer;
    int a;
    int b;
    setlocale(LC_ALL, "RUS");
    cout << "Привет username\n";

    cout << "В трёхзначном числе зачеркнули первую цифру слева. Когда полученное "
        "двузначное число умножили на 7, то получили данное число.Найти это "
        "трёхзначное число." << "\n";
    cout << dz_18() << "\n";// запуск подпрограммы для выполнения 18 задания
    cout << "\n";

    cout << "Дано натуральное число n. Вычислить количество его нечётных делителей." << "\n";
    cin >> answer;
    cout << dz_19(answer) << "\n";// запуск подпрограммы для выполнения 19 задания
    cout << "\n";

    cout << "Даны натуральные числа a и b (a<b). Получить все простые числа p, "
        "удовлетворяющие неравенствам a<=p<=b." << "\n";
    cin >> a >> b;

    for (auto i : dz_44(10, 100))// запуск подпрограммы для выполнения 44 задания
    {
        cout << i << " ";
    }
    cout << "\n";
}


int dz_18()
{
    int num;
    for (int i = 100; i < 999; i++)
    {
        num = i % 100;
        if (7 * num == i)
            return i;
    }

}


int dz_19(int n, bool div)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && i % 2 != 0) 
        {
            count += 1;
            if (div) 
                cout << i << " ";
        }
    }
    if (div)
        cout << " - делители" << "\n";
    return count;
}


vector<int> dz_44(int a, int b)
{
    vector<int> arr;
    for (int p = a; p <= b; p++)
    {
        int count = 0;
        for(int i = 1; i <= p; i++)
        {
            if (p % i == 0)
                count += 1;
        }
        if (count == 2)
            arr.push_back(p);
    }
    return arr;
}