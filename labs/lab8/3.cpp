#include <iostream>
using namespace std;
int a, b;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ����� ���� �������� (A � B)" << endl;
	cin >> a >> b;
	cout << "������ ��������� ����� ������� A (���� ����������� ������� B ����������� ������ �� ������� A)" << endl;
	cout << a % b;
	return 0;
}
