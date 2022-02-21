#include <iostream>
#include <vector>
using namespace std;

bool check_prime(int);

int main()
{
	// loading data
	int N;
	cin >> N;

	vector<int> A(N);
	for (int i=0; i<N; i++) {
		cin >> A[i];
	}

	// check prime number
	int count = 0;
	for (int i=0; i<N; i++) {
		if (check_prime(A[i])) {
			count++;
		}
	}
	cout << count << endl;
	return 0;
}

bool check_prime(int N)
{
	bool is_prime = true;
	if (N == 1) {
		return false;
	}
	for (int j=2; j<=N-1; j++) {
		if (N % j == 0) {
			return false;
		}
	}
	return true;
}

