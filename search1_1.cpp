#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, value;
	cin >> N >> value;

	vector<int> data(N);
	for (int i=0; i<N; i++)
	{
		cin >> data[i];
	}

	bool flag = false;
	for (const auto& item : data)
	{
		if (item == value)
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

