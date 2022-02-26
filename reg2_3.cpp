#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main()
{
	string s;
	cin >> s;

	regex reg{R"(^([a-z]+\-)*[a-z]+$)"};
	smatch m;

	bool search = regex_search(s, m, reg);
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
	
