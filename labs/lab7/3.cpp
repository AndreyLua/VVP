
#include <iostream> 
#include <cmath> 
using namespace std;
double x, y, a;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ����������� �� ������ � �� ���������, ������� ����������� �� (�)" << endl;
	cin >> x >> a >> y;
	cout << "��������� ���� ������ ����� (� ��, 1 ��)" << endl;
	cout << (a / x) * y << " " << (a / x);
	return 0;
}