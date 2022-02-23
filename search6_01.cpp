#include <bits/stdc++.h>
using namespace std;

/**
 * ペアの全探索
 */

int main()
{
	int n, k;
	cin >> n >> k;

	vector<int> a(n);
	for (int i=0; i<n; ++i)
	{
		cin >> a[i];
	}

	int counter = 0;
	for (int i=0; i<n; ++i)
	{
		for (int j=i+1; j<n; ++j)
		{
			if (a[i] + a[j] <= k)
			{
				counter++;
			}
		}
	}
	cout << counter << endl;
	return 0;
}

