#include <iostream>
using namespace std;
int a,b,c;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� 3 ������� ������������" << endl;
	cin >> a >> b >> c ;
	if ( (a+b)>c && (c + b) > a && (c + a) > b  )
	{
		if ( (c*c) == (a*a+b*b) || (a * a) == (c * c + b * b) || (b * b) == (a * a + c * c) )
		{
			cout << "������ ����������� �������������" << endl;
		}
		else
		{
			cout << "������ ����������� �� �������������" << endl;
		}
	}
	else
	{
		cout << "������� ������������ �� ����������" << endl;
	}
	
	return 0;
}