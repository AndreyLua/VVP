#include <iostream>
using namespace std;
int n; 
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите количество секунд"<< endl;
	cin >> n; 
	cout << "С начала последней минуты прошло: (секунд)" << endl;
	cout << n % 60;
	return 0;
}