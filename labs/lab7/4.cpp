#include <iostream> 
#include <cmath> 
using namespace std;
double v1, v2, s, t;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите скорость первого и второго автомобил€, введите значение рассто€ни€ между ними и врем€ отдалени€" << endl;
	cin >> v1 >> v2 >> s >> t;
	cout << "–ассто€ние между первым и вторым автомобилем" << endl;
	cout << (v1 + v2) * t + s;
	return 0;
}