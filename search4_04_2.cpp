#include <iostream>
using namespace std;

bool c_is_in_s(string s, char c)
{
	int N = s.size();
	bool flag = false;
	for (int i=0; i<N; ++i)
	{
		if (S[i] == c)
		{
			flag = true;
		}
	}
	return flag;
}


int main()
{
	// loading data
	string S;
	cin >> S;

	// linear search of the array
	int count = 0;
	// 小文字のalphabetを走査する上手な方法
	for (char c='a'; c<='z'; c++)
	{
		if (c_is_in_s(S, c))
		{
			count++;
		}
	}

	cout << count << endl;
	return 0;
}
