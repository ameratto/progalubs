
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Vvedit' chislo: ";
    cin >> a;
    if (a > 0) {
        cout << "a - dodat'ne";
    }
    else if (a < 0) {
        cout << "a - vidiemne";
    }
    else {
        cout << "a=0";
    }
}

