#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int b;
    srand(time(NULL));
    int a = rand() % 100;
    cout << "sdsd" << endl;
    while (b != a) {
        cin >> b;
        if (b > a)
            cout << "dssd" << endl;
        else if (b < a)
            cout << "sdd" << endl;
        else
            cout << "ds" << endl;
    }
    return 0;
}


