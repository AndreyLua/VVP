#include <iostream>
using namespace std;
int a,b;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите числа A и B" << endl;
	cin >> a >> b;
	if (a > 2 && b <= 3) {
		cout << "Правда ( a > 2 b <= 3 ) " << endl;
	}
	else
	{
		cout << "Ложь ( a > 2 b <= 3 )" << endl;
	}
	return 0;
}