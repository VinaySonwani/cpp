// MagicNumbers_n_SymbolicConstants.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#define STUDENT_PER_CLASS 40	
#include "symbolic.h"
using namespace std;

int sqr(int a)
{
	return (a*a);
}

int recalculate(int ttlCls)
{
	return (ttlCls * cnstvar::Student_per_class);
}

int _tmain(int argc, _TCHAR* argv[])
{
	int totalClass = 12;
	int totalStudents = totalClass * 30;
	cout << totalStudents << "\n" << endl;

	int b = sqr(30);
	cout << b << "\n" << endl;
	
	totalStudents = totalClass * STUDENT_PER_CLASS;
	cout << totalStudents << "\n" << endl;

	const int Student_per_class = 50;
	totalStudents = totalClass * Student_per_class;
	cout << totalStudents << "\n" << endl;

	int ttl = recalculate( totalClass);
	cout << ttl << "\n" << endl;
	return 0;
}

