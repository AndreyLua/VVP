
#include <iostream> 
#include <cmath> 
using namespace std;
double a1, b1, a2, b2, c1, c2, op, op1, op2;
int main()
{ 
	setlocale(LC_ALL, "Russian");
	cout << "������� A1, B1, C1, A2, B2, C2 (��������� ��������� �������)" << endl;
	cin >> a1 >> b1 >> c1;
	cin >> a2 >> b2 >> c2;
	op = a1 * b2 - b1 * a2;
	if (op == 0)
	{
		if (a2 / a1 == c2 / c1) {
			cout << "���������� ����� �������";
		}
		else
		{
			cout << "��� �������";
		}
	}
	else
	{
		op1 = c1 * b2 - b1 * c2;
		op2 = a1 * c2 - c1 * a2;
		cout << "����� ���������" << endl;
		cout << op1 / op << op2 / op;
	}
	return 0;
}

