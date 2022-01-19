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

	for (int i=0; i<N; i++)
	{
		cout << A[N-1-i] << endl;
	}

	return 0;
}
