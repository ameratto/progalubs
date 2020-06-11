#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Vveditʹ pershyy kut";
    cin >> a;
    cout << "vveditʹ druhyy kut";
    cin >> b;
    cout << "vveditʹ tretiy kut";
    cin >> c;

    if (a + b + c == 180)
    {
        cout << "trykutnyk diysnyy";
    }
    else
    {
        cout << "trykutnyk ne diysnyy";
    }

}