#include <iostream>
using namespace std;

int main()
{
	int A = 0;
	int B = 0;
	cin >> A >> B;

	if (A % B == 0)
	{
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}

