#include <iostream>

#include <cmath>

using namespace std;

int a, b, c, d, d2;

int main()

{

	cin >> a >> b >> c;

	d = b;

	b = a;

	d2 = c;

	c = d;

	a = d2;

	cout << a << " " << b << " " << c;

	cin >> a;

}