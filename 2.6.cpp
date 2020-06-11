
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    unsigned int a;
    cout << "Введите не отрицательное целое число:";
    cin >> a;
    int b = 0;
    for (int i = 1;;i++) {
        int p = pow(10, i);
        b = b + (a % p) / pow(10, i - 1);
        if (a / pow(10, i) == 0) {
            break;
        }
    }
    cout << b;
}
