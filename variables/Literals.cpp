// Literals.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int i = 5u;
	cout << i << "\n" << endl;

	int j = 7l;
	cout << j << "\n" << endl;
	 
	double k = 3.00e8;
	cout << k << "\n" << endl;

	float m = 2.3;
	cout << m << "\n" << endl;

	float n = 5.4f;
	cout << n << "\n" << endl;

	int p = 012;
	cout << p << "\n" << endl;
	p = 013u;
	cout << p << "\n" << endl;

	int q = 0xC;
	cout << q << "\n " << endl;
	q = 0xDl;
	cout << q << "\n" << endl;

	int r = 0x02;
	cout << r << "\n" << endl;

	// int s = 0b1;
	// cout << s << "\n" << endl;

	long t = 275550;
	cout << t << "\n" << endl;
	// t = 2'75'5'50;
	// cout << t << "\n" << endl;
	return 0;
}

