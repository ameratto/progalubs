
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    char ch;

    cout << "Введите любой символ:\t";

    cin >> ch;

    int a = ch;

    if ((a <= 47) || (a >= 58 && a <= 64) || (a >= 91 && a <= 96) || (a >= 123 && a <= 127)) {

        cout << "Специальный символ";

    }
    else if (a >= 65 && a <= 90) {

        cout << "Большая буква английського алфавита";

    }

    else if (a >= 97 && a <= 122) {

        cout << "Маленькая буква английського алфаваита";

    }
    else {

        cout << "Цифра";

    }
}

