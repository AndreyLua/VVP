#include <iostream>
#include <cmath>
using namespace std;
int a,b,c;
double l;
int main()
{
	cin >> a >> b >> c;
	cout <<(max(a, c) - min(a, c)) * (max(b, c) - min(b, c));
}
