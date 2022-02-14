#include <iostream>
#include <vector>
#include <algorithm>
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

	// storing the counts of each digits
	vector<int> count(9);
	for (const auto& item : A)
	{
		// cout << item << endl;
		count[item - 1]++;
	}

	// cout << "count is done" << endl;

	for (const auto& item : count)
	{
		// cout << item << endl;
	}

	// cout << endl;

	// finding most frequent number in the array
	int max = 0;
	int max_index = 0;
	for (int i=0; i<9; i++)
	{
		if (max < count[i])
		{
			max = count[i];
			max_index = i;
		}
	}
	cout << max_index + 1 << endl;
}


	
