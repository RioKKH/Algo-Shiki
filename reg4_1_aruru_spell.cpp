#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main()
{
	string S;
	cin >> S;

	string T = "ra";
	// 肯定先読みを使う
	// 正規表現の先読み
	// algo(?=method) --> algomethod, algomethod2, algomethoder
	// 否定先読み
	// algo(?!method) --> algo, algorithm, algometry
	//
	// 正規表現の後読み
	// 肯定後読み
	// (?<=algo)method --> algomethod, 2algomethod, algomethoder
	// 否定後読み
	// (?<!algo)method --> method, brute-force method, argomethod
	regex reg{R"(ru(?=r))"};

	string ret = regex_replace(S, reg, T);

	cout << ret << endl;

	return 0;
}

