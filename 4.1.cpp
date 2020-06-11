
#include <iostream>
using namespace std;

int prime_numbers(int x, int y)
{
int a, b, c, d, e = 0;
for (a = x; a <= y; a++) {
	c = a / 2;
	d = 0;
	for (b = 2; b <= c; b++)
		if ((a % b) == 0)
		{
			d++;
			break;
		}
	if (d==0)
	{
		cout << a << "\t";
		e++;
		if ((e > 0) && ((e % 10) == 0))
			cout << "\n";
	}
}
return e;
}
int main()
{
	int x, y;
	setlocale(LC_ALL, "");
	cout << "Простые числа\n";
	cout << "Введите диапазон простых чисел\t";
	cin >> x >> y;
	cout << "Количество: " << prime_numbers(x, y);
}

