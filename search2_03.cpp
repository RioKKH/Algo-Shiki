#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	if (N == 1)
	{
		cout << "No" << endl;
	} 
	else
	{
		int count = 0;
		for (int i=2; i<=N; i++)
		{
			if (N % i == 0)
			{
				if (i == N)
				{
					cout << "Yes" << endl;
					return 0;
				}
				else if (i != N)
				{
					cout << "No" << endl;
					return 0;
				}
			}
		}
	}
}

		
