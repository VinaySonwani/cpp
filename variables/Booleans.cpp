// Booleans.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

bool isequal(int a, int b)
{
	return(a == b);
}


int _tmain(int argc, _TCHAR* argv[])
{
	bool i = true;
	cout << i << "\n" << endl;
	cout << (!i) << "\n" << endl;

	cout << boolalpha;
	cout << true << "\n" << endl;
	cout << false << "\n" << endl;

	if(isequal(3,3))
		cout << "Values r equal\n" << endl;
	else
		cout << "Values r not equal\n" << endl;

	return 0;
}

