#include <iostream>
using namespace std;
int a,b,c;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ����� A � B � C" << endl;
	cin >> a >> b>> c;
	if (a<b<c) {
		cout << "������ ( a < b < c )" << endl;
	}
	else
	{
		cout << "���� ( a < b < c ) " << endl;
	}
	return 0;
}