#include <iostream>
using namespace std;
int a;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� �����" << endl;
	cin >> a;
	if (a> 9 && a < 100 && a%2 == 0) {
		cout << "������ ����� �������� ������ ����������" << endl;
	}
	else
	{
		cout << "������ ����� �� �������� ������ ���������� " << endl;
	}
	return 0;
}