#include <bits/stdc++.h>
using namespace std;

/**
 * 複数の配列の全探索
 *
 * 今回は3重ループで3つの配列を全探索する
 */
int main()
{
	// loading data
	int X, Y, Z;
	cin >> X >> Y >> Z;

	vector<int> A(X);
	for (int i=0; i<X; i++)
	{
		cin >> A[i];
	}
	vector<int> B(Y);
	for (int i=0; i<Y; i++)
	{
		cin >> B[i];
	}
	vector<int> C(Z);
	for (int i=0; i<Z; i++)
	{
		cin >> C[i];
	}

	int count = 0;
	for (const auto& a : A)
	{
		for (const auto& b : B)
		{
			for (const auto& c : C)
			{
				if (a + b == c)
				{
					count++;
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}

