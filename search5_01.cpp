#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 複数の配列の検索
 */
int main()
{
	int N, M;
	cin >> N >> M;

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
			if (a > b)
			{
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}


