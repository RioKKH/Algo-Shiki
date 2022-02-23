#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> A(N);
	for (int i=0; i<N; ++i)
	{
		cin >> A[i];
	}

	int counter = 0;
	for(int x=0; x<N; ++x)
	{
		for (int y=x+1; y<N; ++y)
		{
			for (int z=y+1; z<N; ++z)
			{
				if (A[y] == max({A[x], A[y], A[z]}))
				// if (A[y] == max({A[x], A[y], A[z]}) && x < y && y < z)
				{
					counter++;
				}
			}
		}
	}
	cout << counter << endl;
	return 0;
}



