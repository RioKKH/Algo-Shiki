#include <iostream>
#include <vector>
using namespace std;

// 無限大を表す値
const int INF = 10000000;

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<int> A(N);
	for (int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}

	// メモ化に使用するサイズNの配列を用意する
	vector<int> T(N, INF);

	// 初期値を定める
	T[0] = 0;

	for (int i = 1;  i < N; ++i)
	{
		for (int j = 1; j <= M; ++j)
		{
			// 現在すでにT[i]に入っている数値と
			// m個前から飛んでくる場合の数値のどちらが小さいかを比較して
			// 小さい方を選択する
			if (i - j >= 0)
			{
				T[i] = min(T[i], T[i-j] + A[i] * j);
				// i = 1: min(T[1] = INF, T[1-1] + A[1] * 1)
				// --> min(INF, 0 + A[1])
			}
		}
	}
	cout << T[N-1] << endl;
}





