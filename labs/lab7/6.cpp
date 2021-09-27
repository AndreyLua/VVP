#include <iostream> 

#include <cmath> 

using namespace std;

double a1, b1, a2, b2, c1, c2, op, op1, op2;

int main()

{

	cin >> a1 >> b1 >> c1;

	cin >> a2 >> b2 >> c2;

	op = a1 * b2 - b1 * a2;

	if (op == 0)

	{

		if (a2 / a1 == c2 / c1) {

			cout << "MNOGO_RESHENII";

		}

		else

		{

			cout << "NET_RESHENII";

		}

	}

	else

	{

		op1 = c1 * b2 - b1 * c2;

		op2 = a1 * c2 - c1 * a2;

		cout << op1 / op << op2 / op;

	}

	cin >> a1;

}