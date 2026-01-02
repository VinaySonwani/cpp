// Comparison_of_floats.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;


bool isequal(double a, double b, double epsilon)
{
	return fabs(a-b) <= epsilon;
}

bool DonaldKnuthfn(double m, double n, double epsilon)
{
	 return fabs(m - n) <= ( (fabs(m) < fabs(n) ? fabs(n) : fabs(m)) * epsilon);
}

bool combo(double k, double l, double epsilon, double relepsilon)
{
    double diff = fabs(k - l);
    if (diff <= epsilon)
        return true;
    return diff <= ( (fabs(k) < fabs(l) ? fabs(l) : fabs(k)) * relepsilon);
}

int _tmain(int argc, _TCHAR* argv[])
{
	double i = 1, j = 10;
	i = i - 0.99;
	j = j - 9.99;
	//(i == j) ? cout << "equal" : cout << "not equal" ;
	cout << ((i == j) ? "equal \n" : "not equal \n");

	double epsilon = 0.0000001;
	bool p = isequal(i,j,epsilon);
	cout << (p ? "equal\n" : "not equal\n");

	double s = 100, t = 1000;
	s = s - 99.99;
	t = t - 999.99;
	bool q = DonaldKnuthfn(s,t,epsilon);
	cout << (q ? "equal\n" : "not equal\n");

	double g = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
	double h = 1.0;
	bool d = DonaldKnuthfn(g, h, epsilon);
	cout << (q ? "equal\n" : "not equal\n");
	double e = 0.0;
	bool f = DonaldKnuthfn(g-1.0, e, epsilon);
	cout << (f ? "equal\n" : "not equal\n");

	double relepsilon = epsilon;
	bool u = combo(g-1.0, e, epsilon, relepsilon);
	cout << (u ? "equal\n" : "not equal\n");

	return 0;
}

