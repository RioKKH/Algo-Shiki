#include <bits/stdc++.h>
using namespace std;

/**
 * 2つの整数L, Rが与えられる
 * L以上R以下の整数から1の位が等しくなるように
 * 相異なる2つの整数を選ぶ方法
 */

int main()
{
	int L, R;
	cin >> L >> R;

	int counter = 0;
	int ref = 0;
	int tar = 0;
	for (int i=L; i<=R; ++i)
	{
		ref = i % 10;
		for (int j=i+1; j<=R; ++j)
		{
			tar = j % 10;
			if (ref == tar)
			{
				counter++;
			}
		}
	}

	cout << counter << endl;
	return 0;
}





