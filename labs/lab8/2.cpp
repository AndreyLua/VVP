#include <iostream>
using namespace std;
int a, b;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"¬ведите длины двух отвезков (A и B)"<< endl;
	cin >> a >> b;
	cout << " оличество отрезков B внутри A (если их распололожить максимально плотно)" << endl;
	cout << a / b;
	return 0;
}
