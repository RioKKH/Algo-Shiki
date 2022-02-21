#include <iostream>
using namespace std;

bool check_divisor(int, int);

int main()
{
	int N, K;
	cin >> N >> K;

	int count = 0;
	for (int i=1; i<=N; i++)
	{
		if (check_divisor(i, K))
		{
			count++;
		}
	}
	cout << count << endl;
}

bool check_divisor(int i, int K)
{
	int num_of_divisor = 0;
	for (int j=1; j<=i; j++)
	{
		if (i % j == 0)
		{
			num_of_divisor++;
		}
	}
	if (num_of_divisor == K)
	{
		return true;
	}
	else
	{
		return false;
	}
}
