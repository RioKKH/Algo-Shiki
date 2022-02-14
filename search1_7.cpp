#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// loading data
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i=0; i<N; i++)
	{
		cin >> A[i];
	}

	// linear search
	int index = 0;
	int max = -1;

	for (int i=0; i<N; i++)
	{
		if (max < A[i])
		{
			index = i;
			max = A[i];
		}
	}

	// output answer
	cout << index << endl;
}

