#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<string> S(N);
	for (int i=0; i<N; i++)
	{
		cin >> S[i];
	}

	int left = 0;
	int right = 0;
	for (const auto& item : S)
	{
		if (item == "left")
		{
			left++;
		} 
		else
		{
			right++;
		}
	}

	if (left > right)
	{
		cout << "left" << endl;
	}
	else if (left < right)
	{
		cout << "right" << endl;
	}
	else if (left == right)
	{
		cout << "same" << endl;
	}

    return 0;
}
