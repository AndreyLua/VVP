#include <iostream>
using namespace std;
int n;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите количество байтов" << endl;
	cin >> n;
	cout << "Количество полных килобайтов" << endl;
	cout << n / 1024;
	return 0;
}
