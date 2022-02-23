#include <bits/stdc++.h>
using namespace std;

/**
 * ペアの探索
 * 重複を許さず全組み合わせを調べる
 */

int main()
{
	int N, K;
	cin >> N >> K;

	vector<int> A(N);
	for (int i=0; i<N; ++i)
	{
		cin >> A[i];
	}

	int counter = 0;
	for (int i=0; i<N; ++i)
	{
		for (int j=i+1; j<N; ++j)
		{
			if (A[i]+A[j]==K)
			{
				counter++;
			}
		}
	}

	cout << counter << endl;
	return 0;
}

