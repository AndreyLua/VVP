#include <iostream>
using namespace std;
int n; 
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите номер дня"<< endl;
	cin >> n; 
	cout << "Номер дня недели" << endl;
	cout << n%7;
	return 0;
}