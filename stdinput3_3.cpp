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

	for (const auto& item : A)
	{
		cout << item % 10 << endl;
	}

	return 0;
