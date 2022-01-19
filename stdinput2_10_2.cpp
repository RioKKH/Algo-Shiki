#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S;
	int N, M;

	cin >> S;
	cin >> N >> M;

	char tmp = S[N-1];
	S[N-1] = S[M-1];
	S[M-1] = tmp;
	cout << S << endl;
}

