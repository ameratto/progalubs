#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int x[5];
    for (int i = 0; i < 5; i++) {
        cout << "Введите\t" << i + 1 << "-ю\t" << "оценку:";
        cin >> x[i];
    }
    double la = (x[0] + x[1] + x[2] + x[3] + x[4]) / 5;
    if (la >= 60) {
        cout << "Перший подил";
    }
    else if (la >= 50) {
        cout << "Другий подил";
    }
    else if (la >= 40) {
        cout << "Третий подил";
    }
    else
    {
        cout << "Невдача";
    }
}

