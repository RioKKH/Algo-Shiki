#include <iostream>
#include <string>
#include <vector>
using namespace std;

/**
 * 英小文字からなる文字列sに含まれる小文字の種類を答える
 */

int main()
{
	string s;
	cin >> s;

	int n;
	n = s.size();

	const int alnum=26;
	const string alphabet = "abcdefghijklmnopqrstuvwxyz";
	vector<bool> check(26);
	for (int i=0; i<alnum; i++)
	{
		check[i] = false;
	}

	int count = 0;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<alnum; j++)
		{
			if (s[i] == alphabet[j])
			{
				if (check[j] == false)
				{
					count++;
				}
				check[j] = true;
			}
		}
	}
	cout << count << endl;

	return 0;
}


