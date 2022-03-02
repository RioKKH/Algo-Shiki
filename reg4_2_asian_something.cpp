#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	// cin >> S;
	// string S = "asian asean asian asian asean asian asian asean";
	getline(cin, S);
	string T = "global";
	regex reg{R"(asian(?=(\s\b[a-z]+){5,}))"};
	// regex reg{R"(asian(?=(\s[a-z]+\b){5,}))"}; // ともかける

	string ret = regex_replace(S, reg, T);
	cout << ret << endl;
	return 0;
}


