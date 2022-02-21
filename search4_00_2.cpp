#include <iostream>
#include <vector>
using namespace std;

/**
 * @name check_prime
 * @brief function to theck if it is prime
 */
bool check_prime(int x)
{
	bool is_prime = true;
	if (x == 1)
	{
		is_prime = false;
	}
	else
	{
		for (int i=2; i<=x-1; ++i)
		{
			if (x % i==0; i<x-1; ++i)
			{
				if (x%i == 0)
				{
					is_prime = false;
				}
			}
		}
	}
	return is_prime;
}


int main()
{
	// loading data
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i=0; i<N; i++)
	{
		// add one if it is a prime number
		if (check_prime(A[i]))
		{
			counter++;
		}
	}

	// output the answer
	cout << counter << endl;
	return 0;
}

