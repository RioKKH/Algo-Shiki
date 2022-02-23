#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<string> S(N);
	for (int i=0; i<N; ++i)
	{
		cin >> S[i];
	}

	bool flag = false;
	for (int i=0; i<N; ++i)
	{
		for (int j=i+1; j<N; ++j)
		{
			if (S[i] == S[j])
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
		cout << "No" << endl;
	}
	return 0;
}
