#include <iostream> 
#include <cmath> 
using namespace std;
int a;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите значение угла в градусах" << endl;
	cin >> a;
	cout << "«начение угла в радианах" << endl;
	cout << a / 180 * 3.14;
	return 0;
}