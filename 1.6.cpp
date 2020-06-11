
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Vvedit' kil'kis't' dniv: ";
    cin >> a;
    int days=0, monthes=0, years=0;
    int month_size[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    while (a >= 366) {
        if (years % 4 + 1 == 4) {
            a = a - 366;
        }
        else {
            a = a - 365;
        }
        years++;
    }
    if (a == 365) {
        if (a % 4 + 1 != 4) {
            a = a - 365;
            years++;
        }
    }
    int c = 0;
    while (a >= (month_size[c])) {
        a = a - month_size[c];
        if (years % 4 == 0) {
            if (c == 1) {
                if (a > 0) {
                    a = a - 1;
                }
            }
        }
        monthes++;
        c++;
    }
    days = a;
    cout << years << "rokiv, " << monthes << "misiatcis, " << days << "dniv";
}

