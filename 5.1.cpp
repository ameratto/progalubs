#include <iostream>
using namespace std;
int main()
{
    int i, n, s, a[20];
    float v;
    setlocale(LC_ALL, "");
    cout << "задайте количество элементов масива:";
    cin >> n;
    cout << "Введите элемнты масива в виде целых чисел:" << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];
    s = 0; v = 0;
    for (i = 0; i < n; i++)
        s = s + a[i];
    if (n != 0)v = (float)s / n;
    cout << "Сумма элементов масива:" << s << endl;
    cout << "Среднее знеченее элементов масива:" << v << endl;
    return 0;    
}