#include <iostream> 
#include <cmath> 
using namespace std;
int a;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� �������� ���� � ��������" << endl;
	cin >> a;
	cout << "�������� ���� � ��������" << endl;
	cout << a / 180 * 3.14;
	return 0;
}