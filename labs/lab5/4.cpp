#include <iostream>
#include <cmath>
using namespace std;
int x1, x2, yy1, y2,w,h;
double l;
int main()
{
	cin >> x1 >> yy1 >> x2 >> y2;
	w = max(x1, x2) - min(x1, x2);
	h = max(yy1, y2) - min(yy1, y2);
	cout << (w + h) * 2 << " " << w * h;
}
