#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	// 横位置iまでのタイルのレイアウト数をメモ化するための配列を用意する
	// 計算の舞台となる配列を定義
	// 全体を0で初期化する
	vector<int> t(n+1, 0);

	// 初期値の設定
	// t[0]を1にすることで、下のfor文でシステマティックな処理が可能となる
	t[0] = 1;

	// 順に計算する
	for (int i=1; i <= n; ++i)
	{
		if (i - 1 >= 0)
		{
			t[i] += t[i-1];
		}
		if (i - 2 >= 0)

		{
			t[i] += t[i-2];
		}
		if (i - 3 >= 0)
		{
			t[i] += t[i-3];
		}
	}
	cout << t[n] << endl;
}
