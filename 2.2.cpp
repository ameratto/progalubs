#include<math.h>
#include <iostream>

using namespace std;

int f(double a)
{
    if (a != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    double a, b, c, d;
    for (;;)
    {
        cout << "vveditʹ pershyy zminnu";
        cin >> a;
        if (f(a) == 1)
        {
            break;
           
        }
        else
        {
            cout << "a = 0\n";
        }
    }
    cout << "vveditʹ druhu zminu";
    cin >> b;
    cout << "vveditʹ vilʹnyy chlen";
    cin >> c;
    d = pow(b, 2) - 4 * a * c;
    if (d > 0)
    {
        double x1 = (-b - pow(d, 0.5)) / 2 * a;
        double x2 = (-b + pow(d, 0.5)) / 2 * a;
        cout << "x1=" << x1 << endl << "x2=" << x2;
    }
    else if (d < 0)
        cout << "ne isnue";
    else
    {
        double x = (-b) / 2 * a;
        cout << "x=" << x;

      }
}
