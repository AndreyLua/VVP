#include <iostream>
#include <cmath>
using namespace std;
int x1, x2, y11, y22, l1, l2;
double l;
int main()
{
	cin >> x1 >> y11 >> x2 >> y22;
	l1 = abs(x1 - x2);
	l2 = abs(y11 - y22);
	l = sqrt((l1 * l1) + (l2 * l2));

	cout << l;
}