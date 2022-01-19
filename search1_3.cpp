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


	int count = 0;
	for (const auto& item : A)
	{
		if (item > 0)
		{
			count++;
		}
	}

	cout << count << endl;
}
