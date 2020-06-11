

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    int a = 0;
    for (int i = 1; i <= 10; i++)
    {
        a = a + i;
    }
    cout << a;
}

