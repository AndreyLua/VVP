#include <iostream>
using namespace std;
int a,b,c;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите числа A и B и C" << endl;
	cin >> a >> b>> c;
	if (a<b<c) {
		cout << "Правда ( a < b < c )" << endl;
	}
	else
	{
		cout << "Ложь ( a < b < c ) " << endl;
	}
	return 0;
}