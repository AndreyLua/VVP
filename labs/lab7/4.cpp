#include <iostream> 
#include <cmath> 
using namespace std;
double v1, v2, s, t;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� �������� ������� � ������� ����������, ������� �������� ���������� ����� ���� � ����� ���������" << endl;
	cin >> v1 >> v2 >> s >> t;
	cout << "���������� ����� ������ � ������ �����������" << endl;
	cout << (v1 + v2) * t + s;
	return 0;
}