#include <iostream>
using namespace std;
int a;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите число" << endl;
	cin >> a;
	if (a> 9 && a < 100 && a%2 == 0) {
		cout << "Данное число является четным двузначным" << endl;
	}
	else
	{
		cout << "Данное число не является четным двузначным " << endl;
	}
	return 0;
}