#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<string> s(n);
	for (int i=0; i<n; i++)
	{
		cin >> s[i];
	}

   for (const auto& item : s)
   {
	   cout << item[0];
   }
   cout << endl;

   return 0;
}
