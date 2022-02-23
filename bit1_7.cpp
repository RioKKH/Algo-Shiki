#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S = "01001";

	int N = S.size();
	int counter = 0;
	for (int i=0; i<N; ++i)
	{
		if (S[i] == '1')
		{
			counter++;
		}
	}
	cout << counter << endl;
	return 0;
}

