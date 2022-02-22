#include <bits/stdc++.h>
using namespace std;

/**
 * 英小文字からなるN個の文字列S0, S1, ..., SN-1が与えられる
 * N個の文字列のうち回分の個数を数えるプログラムを作成する
 */
bool is_palindrome(string);

int main()
{
	int N;
	cin >> N;

	vector<string> S(N);

	for (int i=0; i<N; i++)
	{
		cin >> S[i];
	}

	int count = 0;
	for (int i=0; i<N; i++)
	{
		if (is_palindrome(S[i]))
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}

/**
 * @brief 回文かどうかを確認する関数
 */
bool is_palindrome(string S)
{
	int N;
	N = S.size();

	bool flag = true;
	// Vectorのサイズが偶数の場合
	if (N % 2 == 0)
	{
		for (int i=0; i<N/2; i++)
		{
			if (S[i] != S[N-1-i])
			{
				flag = false;
			}
		}
	}
	// Vectorのサイズが奇数の場合
	else
	{
		for (int i=0; i<(N-1)/2; i++)
		{
			if (S[i] != S[N-1-i])
			{
				flag = false;
			}
		}
	}
	return flag;
}
