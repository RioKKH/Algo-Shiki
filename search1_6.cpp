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

    int max = -101;    // since -100 <= A <= 100
	// int max = A[0]; // This is also OK.
	for (int i=0; i<N; i++)
	{
		if (max < A[i])
		{
			max = A[i];
		}
	}
	cout << max << endl;
}
