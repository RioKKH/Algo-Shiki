#include <iostream>
#include <string>
#include <vector>
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

	string all = "";
	for (const auto& item : S)
	{
		all += item;
	}

	cout << all.length() << endl;

	return 0;
}

