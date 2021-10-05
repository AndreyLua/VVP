#include <iostream>
using namespace std;
int a, b;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите двухзначное число" << endl;
	cin >> a;
	cout << "÷ифры были переставлены" << endl;
	b = a % 10 * 10 + a / 10;
	cout << b;
	return 0;
}

