#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <regex>
using namespace std;

int main()
{
	int N, Y, M;
	cin >> N >> Y >> M;

	ostringstream sout;

	sout << setfill('0') << setw(2) << M;
	string MM = sout.str();
	string YYYYMM = to_string(Y) + MM;

	string regStr = R"(^\d+_(.+)_)" + YYYYMM + R"(\d{2}\.pdf$)";
	// string regStr = R"([^_]+(?=_)" + YYYYMM + R"(\d{2}\.pdf$))";
	// string regStr = "^\\d+_(.+)_" + YYYYMM + "\\d{2}\\.pdf$";
	cout << regStr << endl;
	regex reg{regStr};

	vector<string> S(N);
	for (int i=0; i<N; ++i)
	{
		cin >> S[i];
	}

	smatch results;
	for (int i=0; i<N; ++i)
	{
		if (regex_match(S[i], results, reg))
		{
			cout << results[1].str() << endl;
		}
	}

	return 0;
}


