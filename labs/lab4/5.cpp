#include <iostream>
#include <cmath>
using namespace std;
int a,b,s,d,p;
double mo;
int main()
{
	cin >> a >> b;
	s =a+b;
	d = a - b;
	p = a * b; 
	mo = double(abs(a)) / abs(b);
	cout << s <<" "<< d <<" "<< p <<" " << mo;
}