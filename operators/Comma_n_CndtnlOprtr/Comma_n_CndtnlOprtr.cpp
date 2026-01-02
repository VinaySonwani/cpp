// Comma_n_CndtnlOprtr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int i = 1, j = 2, k;
	k = (i++, ++j);
	cout << k << "\n" << endl;

	int x = 4, y = 5, z;
	z = x, y;
	cout << z << "\n" << endl;
	cout << y << "\n" << endl;

	int p = 6, q = 7, r;
	r = (p < q) ? p + q : q - p;
	cout << r << "\n" << endl;

	int a = 8, b = 9, c;
	c = (a < b) ? a : b;
	cout << c << "\n" << endl;
	cout << ((a < b) ? a : b) << "\n" << endl;
	cout << (a < b) ? a : b;
	cout << "\n" << endl;

	bool flag = true;
	const int t = flag ? 15 : 18;
	cout << t << "\n" << endl;
	return 0;
}

