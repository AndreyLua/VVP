#include <iostream>
using namespace std;
int n;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите год" << endl;
	cin >> n;
	cout << "Столетие этого года  = " << endl;
	cout << n/ 100 + 1  << endl;
	return 0;
}