#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main()
{
	// 調べたい文字列
	string S = "android";
	// 置き換える文字列
	string T = "algomethod";
	// 調べる正規表現
	regex reg{R"(^a.*d$)"};

	// 置換対象、置換する正規表現、置換後の文字の順
	string ret = regex_replace(S, reg, T);

	// algomethodが出力される
	cout << ret << endl;

	return 0;
}
