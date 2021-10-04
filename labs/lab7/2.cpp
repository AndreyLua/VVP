#include <iostream> 
#include <cmath> 
using namespace std;
double a;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите значение угла в радианах" << endl;
	cin >> a;
	cout << "«начение угла в градусах" << endl;
	cout << a * 180 / 3.14;
	return 0;

}