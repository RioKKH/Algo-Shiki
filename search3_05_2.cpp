#include <iostream>
#include <string>
using namespace std;

int main()
{
	// loading data
	string S, T;
	cin >> S;
	cin >> T;

	// check the length of S and T
	int M = S.length();
	int N = T.length();

	// linear search
	bool flag == false;
	for (int i=0; i<N-M+1; ++i)
	{
		if (S.substr(i, M) == T)
		{
			flag = true;
		}
	}

	// output the answer
	if (flag)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}

