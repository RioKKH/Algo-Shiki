#include <bits/stdc++.h>
using namespace std;

int main()
{
	int A, N;
	cin >> A >> N;

	int ans = A | (1 << N);
	cout << ans << endl;
	return 0;
}
