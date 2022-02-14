#include <iostream>
#include <string>
using namespace std;

int main()
{
	// loading data
	string S;
	cin >> S;

	char c;
	cin >> c;

	int N;
	N = S.size();

	// check if c is in S
	bool flag = false;

	for (int i=0; i<N; i++)
	{
		if (S[i] == c)
		{
			flag = true;
		}
	}

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





