#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main()
{
	// 調べたい文字列
	string S = "AlgoMethod 2021";

	// 調べる正規表現
	regex reg{R"(^\w+$)"};

	// マッチした文字列情報が格納される (存在しなければnull)
	smatch m;

	// マッチするか (bool値)
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


