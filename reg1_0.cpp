#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main()
{
	// 調べたい文字列
	string S = "algomethod";
	// 調べる正規表現
	regex reg{R"(a.*d)"};
	// マッチした文字列情報が格納される（存在しなければ null)
	smatch m;

	// マッチするか (bool値)
	bool search = regex_search(S, m, reg);
	if (search)
	{
		// "Yes"と表示される
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}
