#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int N;
	cin >> N;

	// i段目までの登り方の数をメモ化するための配列を用意する
	vector<int> F(N+1);
	F[0] = 1; // F[0]を１としておくことで簡単な記述が可能となる
	F[1] = 1;

	for (int i=2; i<=N; ++i)
	{
		F[i] = F[i-1] + F[i-2];
	}

	cout << F[N] << endl;

	return 0;
}
