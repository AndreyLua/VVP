#include <iostream>
using namespace std;
int a, b;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите длины двух отвезков (A и B)" << endl;
	cin >> a >> b;
	cout << "Длинна незанятой части отрезка A (если расположить отрезки B максимально плотно на отрезке A)" << endl;
	cout << a % b;
	return 0;
}
