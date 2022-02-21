#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// loading data
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i=0; i<N; ++i)
	{
		cin >> A[i];
	}

	// linear search of arrray
	int count = 0;
	for (int i=0; i<N; ++i)
	{
		// check if it is prime or not
		bool is_prime = true;
		if (A[i] == 1)
		{
			is_prime = true;
		}
		else
		{
			for (int j=2; j<=A[i]-1; ++j)
			{
				if (A[i]%j == 0)
				{
					is_prime = false;
				}
			}
		}
		// add 1 to counter if it is a prime number
		if (is_prime)
		{
			count++;
		}
	}

	// output the answer
	cout << count << endl;
	return 0;
}
	


