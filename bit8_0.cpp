#include <iostream>
using namespace std;

/**
 * XOR演算
 * 2つのビットを各桁ごとに比較し、それぞれのビットの値が異なるのならば1を、
 * おなじならば0を返す
 */
int main()
{
	int a = 45; // 0b101101
	int b = 25; // 0b011001
	cout << a << " XOR " << b << " = " << (a^b) << endl; // 0b110100
 	return 0;
}
