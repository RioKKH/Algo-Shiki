#include <bits/stdc++.h>
using namespace std;

/**
 * A を二進数で表したときのN桁目を取り出す方法
 */
int main()
{
	int A, N;
	cin >> A >> N;

	int ans = A & (1 << N);
	cout << ans << endl;
	return 0;
}
