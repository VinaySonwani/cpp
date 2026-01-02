// Watch_Window_n_Call_Stack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int prnt(int c)
{ 
	c = c + 1;
	return c;
}

int dsply(int a)
{
	a = a + 1;
	int b = prnt(a);
	return b;
}


int _tmain(int argc, _TCHAR* argv[])
{
	int i = 1;
	i = i + 1;
    int j = dsply(i);
	cout << j << endl;
	return 0;
}

