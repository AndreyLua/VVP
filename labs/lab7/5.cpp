#include <iostream> 
#include <cmath> 
using namespace std;
double a, b;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "A�x + B = 0, ������� A � B" << endl;
	cin >> a >> b;
	cout << "X �����" << endl;
	cout << -b / a;
	return 0;
}