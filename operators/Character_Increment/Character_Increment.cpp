// Character_Increment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	char ptr = 'a';
	cout << static_cast<char>(ptr+1) << "\n" << endl;

	cout << (int)ptr << "\n" << endl;

	char *pntr = "Raptor";
	int len = strlen(pntr);
	if(1)
	{
		for(int i=0; i<len; i++)
		{
			pntr[i] = (pntr[i] + 1);
		}
		cout << pntr << "\n" << endl;
	}

	return 0;
}

