#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> A(N);
	for (int i=0; i<N; i++)
	{
		cin >> A[i];
	}

	int ans = 1;
	for (const auto& item : A)
	{
		ans *= item;
	}

	cout << ans << endl;

	return 0;
}

