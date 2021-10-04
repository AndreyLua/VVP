
#include <iostream> 
#include <cmath> 
using namespace std;
double x, y, a;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите колличество кг конфет и их стоимость, введите колличество кг (х)" << endl;
	cin >> x >> a >> y;
	cout << "Стоимость этих конфет равна (Х кг, 1 кг)" << endl;
	cout << (a / x) * y << " " << (a / x);
	return 0;
}