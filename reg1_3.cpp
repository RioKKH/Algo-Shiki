#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main()
{
	string S;
	cin >> S;

	regex reg{R"(^a{1,5}b{10}c*$)"};
	smatch m;

	bool search = regex_search(S, m, reg);
	if (search)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}
