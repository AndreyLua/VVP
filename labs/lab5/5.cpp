#include <iostream>
#include <cmath>
using namespace std;
double x1, x2, yy1, y2,x3,y3,l1,l2,l3;
int main()
{
	cin >> x1 >> yy1 >> x2 >> y2 >> x3 >> y3;
	l1 = sqrt((abs(x1 - x2) * abs(x1 - x2)) + (abs(yy1 - y2) * abs(yy1 - y2)));
	l2 = sqrt((abs(x1 - x3) * abs(x1 - x3)) + (abs(yy1 - y3) * abs(yy1 - y3)));
	l3 = sqrt((abs(x3 - x2) * abs(x3 - x2)) + (abs(y3 - y2) * abs(y3 - y2)));
	cout << l1 + l2 + l3 << " " << sqrt((l1 + l2 + l3) / 2 * (((l1 + l2 + l3) / 2 - l1) * ((l1 + l2 + l3) / 2 - l2) * ((l1 + l2 + l3) / 2 - l3)));

}
