#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// loading data
	int N;
	cin >> N;

	vector<int> A(N);
	for (int i=0; i<N; i++)
	{
		cin >> A[i];
	}

	// counting each number in array A
	vector<int> num(9);
	for (const auto& item : A)
	{
		num[item-1]++;
	}

	for (const auto& item : num)
	{
		cout << item << endl;

	}
}


