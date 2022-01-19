#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> A(N);
	for (int i=0; i<N; i++)
	{
		cin >> A[i];
	}

	int min = 9999;
	for (const auto& item : A)
	{
		if (item < min)
		{
			min = item;
		} 
	}
	cout << min << endl;

	return 0;
}


