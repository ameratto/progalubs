
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int a, b, c;
	float s, d;
	cout << "Введите стороны триугольника:";
	cin >> a;
	cin >> b;
	cin >> c;
	s = ((float)a + b + c) / 2;
	d = sqrt((float)s * (s - a) * (s - b) * (s - c));
	cout << "Площадь триугольника равна:" << d;
	return 0;
}

