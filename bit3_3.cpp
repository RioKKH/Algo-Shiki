#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int result = 1;
	for (int i=0; i<N; ++i)
	{
		result *= 2;
	}
	cout << result << endl;
	return 0;
}

