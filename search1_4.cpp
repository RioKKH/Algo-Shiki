#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, V;
	cin >> N >> V;

	vector<int> A(N);
	for (int i=0; i<N; i++)
	{
		cin >> A[i];
	}

	int position = -1;
	for (int i=0; i<N; i++)
	{
		if (A[i] == V)
		{
			position = i;
		}
	}

	cout << position << endl;
}
