#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main()
{
	string S;
	cin >> S;

	regex reg{R"(^\w+@\w+\.\w{1,4}$)"};
	// regex reg{R"(^[0-9a-zA-Z]+\@[0-9a-zA-Z]+\.[0-9a-zA-Z]{1,4})"};
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
