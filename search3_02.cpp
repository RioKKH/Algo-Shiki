#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S;
	cin >> S;

	int N;
	N = S.size();

	bool flag = true;
	if (N % 2 == 0)
	{
		for (int i=0; i<N/2; i++)
		{
			if (S[i] != S[N-1-i])
			{
				flag = false;
			}
		}
	}
	else 
	{
		for (int i=0; i<(N-1)/2; i++) 
		{
			if (S[i] != S[N-1-i])
			{
				flag = false;
			}
		}
	}

	if (flag == true)
	{
		cout << "Yes" << endl;
	} 
	else 
	{
		cout << "No" << endl;
	}

	return 0;
}

	
