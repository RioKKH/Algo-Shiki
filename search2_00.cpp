#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// loaing data
	int N;
	cin >> N;

	// initialize count as 0
	int count = 0;

	// sweep i from i to N by adding 1 for each step
	for (int i=1; i<=N; i++)
	{
		if (i % 2 == 0)
		{
			count++;
		}
	}

	// output result
	cout << count << endl;
}

