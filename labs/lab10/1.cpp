#include <iostream>
using namespace std;
int a,b;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ����� A � B" << endl;
	cin >> a >> b;
	if (a > 2 && b <= 3) {
		cout << "������ ( a > 2 b <= 3 ) " << endl;
	}
	else
	{
		cout << "���� ( a > 2 b <= 3 )" << endl;
	}
	return 0;
}