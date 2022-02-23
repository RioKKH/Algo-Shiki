#include <bits/stdc++.h>
using namespace std;

/**
 * 複数の配列の検索
 */
int main()
{
	int N, M, K;
	cin >> N >> M >> K;

	vector<int> A(N);
	for (int i=0; i<N; i++)
	{
		cin >> A[i];
	}

	vector<int> B(M);
	for (int i=0; i<M; i++)
	{
		cin >> B[i];
	}

	int count = 0;
	for (const auto& a : A)
	{
		for (const auto& b : B)
		{
			if (a + b == K)
			{
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}
