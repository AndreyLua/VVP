#include <iostream>
using namespace std;
int a;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� 4-� ������� �����" << endl;
	cin >> a;
	if ( a/1000==a%10 && (a/100)%10 == (a/10)%10)
	{
		cout << "������ ����� �������� ��������� ����� ������� � ������ ������" << endl;
	}
	else
	{
		cout << "������ ����� �� �������� ��������� ����� ������� � ������ ������" << endl;
	}
	
	return 0;
}