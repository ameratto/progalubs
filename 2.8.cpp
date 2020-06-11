
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int i, n;
	float s;
	cout << "Введите число:";
	cin >> n;
	s = 1;
	for (i = 2; i <= n; i++) {
		s = s + (float)1 / i;
	}
	cout << "Сумма:1+1/2+...1/n:" << s << endl;
	return 0;
}
