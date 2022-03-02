#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, X, Y;
	cin >> N >> X >> Y;

	// メモ化のためのサイズNの配列を最初に準備する
	vector<int> A(N);
	for (int i=0; i<N; ++i)
	{
		A[i] = 0;
	}
	A[0] = X;
	A[1] = Y;

	for (int i=2; i<N; ++i)
	{
		A[i] = (A[i-2] + A[i-1]) % 100;
	}

	cout << A[N-1] << endl;

	return 0;
}





