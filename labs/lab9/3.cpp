#include <iostream>
using namespace std;
int n,k; 
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ������ ��� (� ����), ����� ����� 1 ������ ����� ����) "<< endl;
	cin >> k >> n; 
	cout << "����� ��� ������" << endl;
	k = k + n - 1;
	if (k % 7 != 0) {
		cout << k % 7;
	}
	else
	{
		cout <<7;
	}

	return 0;
}