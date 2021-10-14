#include <iostream>
using namespace std;
int a;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите 4-х значное число" << endl;
	cin >> a;
	if ( a/1000==a%10 && (a/100)%10 == (a/10)%10)
	{
		cout << "ƒанное число читаетс€ одинаково слева направо и справа налево" << endl;
	}
	else
	{
		cout << "ƒанное число не читаетс€ одинаково слева направо и справа налево" << endl;
	}
	
	return 0;
}