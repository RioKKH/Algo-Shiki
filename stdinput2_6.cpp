#include <iostream>
using namespace std;

int main()
{
	int A, B, C, D;
	int max = 0;
	cin >> A >> B >> C >> D;

	max = A > max ? A : max;
	max = B > max ? B : max;
	max = C > max ? C : max;
	max = D > max ? D : max;

	cout << max << endl;

	return 0;
}


