#include <iostream>
using namespace std;
int a, b;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ����������� �����" << endl;
	cin >> a;
	cout << "����� ���� ������������" << endl;
	b = a % 10 * 10 + a / 10;
	cout << b;
	return 0;
}

