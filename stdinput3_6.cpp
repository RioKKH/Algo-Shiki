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

	int sum = 0;
	for (const auto& item : A)
	{
		sum += item;
	}

	cout << sum / N << endl;

	return 0;
}
