
#include <iostream>
using namespace std;
int zero_small(int& a, int& b)
{
    if (a < b)
        a = 0;
    else if (a > b)
        b = 0;
    return 0;
}
int main()
    {
    int a, b;
    setlocale(LC_ALL, "");
    cout << "Введите первый и второй аргумент:\n";
      cin >> a >> b;
    zero_small(a, b);
    cout << a << "" << b;
    }