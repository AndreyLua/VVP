#include <iostream>
using namespace std;
int a, b, c;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите ширину и высоту прямоугольника, сторону квадрата С" << endl;
	cin >> a >> b >> c;
	cout << "Количество квадратов, размещенных на прямоугольнике, а также площадь незанятой части прямоугольника: " << endl;
	cout << a / c * b / c << endl;
	if (c < a && c < b) {
		if ((a % c) != 0 && (b % c) != 0)
		{
			cout << (a % c) * (b % c);
		}
		else
		{
			if ((a % c) == 0) 
			{
				cout << (b % c);
			}
			else
			{
				cout << (a % c);
			}

		}
	}
	else
	{
		cout << "Нет свободного места";
	}


	return 0;
}