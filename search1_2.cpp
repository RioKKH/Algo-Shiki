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

	int count = 0;
	for (const auto& item : A)
	{
		if (item == V)
		{
			count++;
		}
	}
	cout << count << endl;

	return 0;
}


