#include <bits/stdc++.h>
using namespace std;

/**
 * 文字列を用いた在庫管理
 */

int main()
{
	string S = "00110";

	int N = S.size();
	bool flag = false;
	for (int i=0; i<N; ++i)
	{
		if (i == 1)
		{
			if (S[N-1-i] == '1')
			{
				flag = true;
			}
		}
	}

	if (flag)
	{ 
		cout << "Yes" << endl;
	}
	else 
	{
		cout << "No";
	}
}
