#include <iostream>
using namespace std;
int a,b,s,d,p;
double ch;
int main()
{
	cin >> a >> b;
	s =a+b;
	d = a - b;
	p = a * b; 
	ch = (double(a * a) / double(b * b));
	cout << s <<" "<< d <<" "<< p <<" " << ch;
}