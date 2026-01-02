// Bitwise_Operators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int i = 4;
	i = i << 1;
	cout << i << "\n";

	int j = 5;
	j = j >> 1;
	cout << j << "\n";

	int k = 6;
	k = ~k;
	cout << k << "\n";

	int m = 7, n = 8;
	cout << (m | n) << "\n";

	cout << (m & n) << "\n";

	cout << (m ^ n) << "\n";

	int p = 9, q = 10;
	cout << (p <<= 1) << "\n";
	cout << (p >>= 1) << "\n";
	cout << (p |= q) << "\n";
	cout << (p &= q) << "\n";
	cout << (p ^= q) << "\n";

	return 0;
}

