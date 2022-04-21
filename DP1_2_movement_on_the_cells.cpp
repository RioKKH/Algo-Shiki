#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// データ読み込み
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i=0; i<N; ++i)
	{
		cin >> A[i];
	}

	// メモ化に使用するサイズNの配列を用意する
	vector<int> T(N);
	T[0] = 0;
	T[1] = A[1];
	for (int i=2; i<N; ++i)
	{
		T[i] = min(T[i-1] + A[i], T[i-2] + 2*A[i]);
	}

	cout << T[N-1] << endl;

	return 0;
}
