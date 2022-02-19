#include <iostream>
#include <string>
using namespace std;

int main()
{
	// loading data
	int N;
	string S, T;
	cin >> N >> S >> T;

	// linear search
	int count = 0;
	for (int i=0; i<N; i++)
	{
		if (S[i] != T[i])
		{
			count++;
		}
	}

	cout << count << endl;
}

	


