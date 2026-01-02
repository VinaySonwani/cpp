// Header_Gaurds.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

#include "Add.h"
#include "Math.h"
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int i = 1, j =2;
	int k = add(i,j);
	cout << k ;
	return 0;
}

