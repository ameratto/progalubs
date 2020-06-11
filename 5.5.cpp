#include <iostream>
using namespace std;

int main()
{
    int i, j, n, a[20][20], l, r;
    setlocale(LC_ALL, "");
    cout << "Задайте размер квадратной матрицы";
    cin >> n;
    cout << "Введите элементы масива в виде челых чисел" << endl;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];
    l = 0;
    r = 0;
    for (i = 0; i < n; i++)
        l = l + a[i][i];
    for (i = 0; i < n; i++)
        r = r + a[i][n - i - 1];
    cout << "Сумма левой диагонали матрицы" << l << endl;
    cout << "Сумма правой диагонали матрицы" << r << endl;
    return 0;
}

