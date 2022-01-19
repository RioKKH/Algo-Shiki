#include <iostream>
using namespace std;

int main()
{
	int A = 0;
	int B = 0;
	cin >> A >> B;

	if (A % 10 < B % 10)
	{
		cout << A << endl;
	} else {
		cout << B << endl;
	}

	return 0;
}



