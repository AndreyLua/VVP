#include <iostream>
using namespace std;
int a,b,c;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите 3 стороны треугольника" << endl;
	cin >> a >> b >> c ;
	if ( (a+b)>c && (c + b) > a && (c + a) > b  )
	{
		if ( (c*c) == (a*a+b*b) || (a * a) == (c * c + b * b) || (b * b) == (a * a + c * c) )
		{
			cout << "Данный треугольник прямоугольный" << endl;
		}
		else
		{
			cout << "Данный треугольник не прямоугольный" << endl;
		}
	}
	else
	{
		cout << "Данного треугольника не существует" << endl;
	}
	
	return 0;
}