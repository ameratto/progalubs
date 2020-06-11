
#include <iostream>
using namespace std;

int main()
{
    int i, n, x, y, a[20];
    setlocale(LC_ALL, "");
    cout << "Введите количесво масивов:";
    cin >> n;
    cout << "Введите элементы масива в виде целых чисел:" << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];
    x = 2147483647;
    y = -2147483648;
    for (i = 0; i < n; i++)
    {
        if (x > a[i]) x = a[i];
        if (y < a[i]) y = a[i];
    }
    cout << "Наименьшее значение элемента масива:" << x << endl;
    cout << "Наибольшее значение элемента масива:" << y << endl;
    return 0;         
}

