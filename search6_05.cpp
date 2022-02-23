#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	string S;
	cin >> S;

	int counter = 0;
	for (int i=0; i<N; ++i)
	{
		for (int j=i+1; j<N; ++j)
		{
			if (S[i] == S[j])
			{
				counter++;
			}
		}
	}
	cout << counter << endl;
	return 0;
}
