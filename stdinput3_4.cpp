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

	for (const auto& item : A)
	{
		if (item % 3 == 0)
		{
			cout << item << endl;
		}
	}

	return 0;
}
