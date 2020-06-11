#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int a = rand() % 90 + 10;
    cout << a;
}
