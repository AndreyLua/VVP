#include <iostream>
using namespace std;
int a, b, c;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ������ � ������ ��������������, ������� �������� �" << endl;
	cin >> a >> b >> c;
	cout << "���������� ���������, ����������� �� ��������������, � ����� ������� ��������� ����� ��������������: " << endl;
	cout << a / c * b / c << endl;
	if (c < a && c < b) {
		if ((a % c) != 0 && (b % c) != 0)
		{
			cout << (a % c) * (b % c);
		}
		else
		{
			if ((a % c) == 0) 
			{
				cout << (b % c);
			}
			else
			{
				cout << (a % c);
			}

		}
	}
	else
	{
		cout << "��� ���������� �����";
	}


	return 0;
}