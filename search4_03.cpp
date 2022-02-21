#include <iostream>
#include <string>
using namespace std;

O)~|+bool check_palindrome(int);

int main()
{
	int L, R;
	cin >> L >> R;

	int count = 0;
	for (int i=L; i<=R; i++)
	{
		if (check_palindrome(i))
		{
			count++;
		}
	}
	cout << count << endl;
}
bool check_palindrome(int i)
{
	string S;
	S = to_string(i);

	int N;
	N = S.size();

	bool flag = true;
	if (int i=0; i<N; i++)
	{
		if (S[i] != S[(N-1)-i])
		{
			flag = false;
		}
	}
	return flag;
}


		

