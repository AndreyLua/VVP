#include <iostream>
using namespace std;
int n; 
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ���������� ������"<< endl;
	cin >> n; 
	cout << "� ������ ��������� ������ ������: (������)" << endl;
	cout << n % 60;
	return 0;
}