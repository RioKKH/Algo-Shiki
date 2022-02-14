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

	// get the length of S
	int N = S.size();

	// linear search
	bool flag = false;
	for (int i=0; i<N; i++)
	{
		if (S[i] == c)
		{
			flag = true;
		}
	}

	// output answer
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

