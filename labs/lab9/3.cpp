#include <iostream>
using namespace std;
int n,k; 
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите номера дня (в году), потом номер 1 января этого года) "<< endl;
	cin >> k >> n; 
	cout << "Номер дня недели" << endl;
	k = k + n - 1;
	if (k % 7 != 0) {
		cout << k % 7;
	}
	else
	{
		cout <<7;
	}

	return 0;
}