#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S;
	int N, M;
	int i = 0;

	cin >> S;
	cin >> N >> M;

	for (const auto& e : S)
	{
		if (i == N-1) {
			cout << S[M-1];
		} else if (i == M-1) {
			cout << S[N-1];
		} else {
			cout << e;
		}
		i++;
	}

	cout << endl;

	return 0;
}

