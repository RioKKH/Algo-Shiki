#include <iostream>
#include <string>
using namespace std;

int main()
{
	// loading data
	string S, T;
	cin >> S >> T;

	// check if T is in S
	bool check = false;
	for (int i=0; i<S.size(); i++)
	{
		check = false;
		for (int j=0; j<T.size(); j++)
		{
			if (S[i+j] == T[j])
			{
				check = true;
			}
			else
			{
				check = false;
				break;
			}
		}
		// If T is in S
		if (check == true)
		{
			cout << "Yes" << endl;
			return 0;
		}
	}
	
	// If T is not in S
	cout << "No" << endl;
	return 0;
}

