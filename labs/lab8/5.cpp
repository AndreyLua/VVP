#include <iostream>
using namespace std;
int a, b;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите трехзначное число" << endl;
	cin >> a;
	b = a / 100;
	a = a % 100;
	cout << "÷ифры были переставлены" << endl;
	cout << a * 10 + b;
	return 0;
}
