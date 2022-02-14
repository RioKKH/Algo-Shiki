#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;

	int gcd = 0;
	if (A < B)
	{
		for (int i=1; i<=A; i++)
		{
			if (A % i == 0 && B % i == 0)
			{
				gcd = i;
			}
		}
	}
	else if (B < A)
	{
		for (int i=1; i<=B; i++)
		{
			if (A % i == 0 && B % i == 0)
			{
				gcd = i;
			}
		}
	}
	else if (A == B)
	{
		gcd = A;
	}
	cout << gcd << endl;
}

