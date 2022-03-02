#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main()
{
	int N, Y, M;
	cin >> N >> Y >> M;

	string S(N);
	for (int i=0; i<N; ++i)
	{
		cin >> S[i];
	}
