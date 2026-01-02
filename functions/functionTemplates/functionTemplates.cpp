
#include <iostream>
using namespace std;

template<typename T>				// Template Parameter declaration
T fn (T a, T b)						// T a & T b are Template Parameters or Template Types
{
	return (a+b);
}

int main()
{
	int c = 6, d = 7;
	int g = fn(c, d);
	cout << g << endl;

	double e = 1.5, f = 1.5;
	double h = fn(e, f);
	cout << h << endl;

	return 0;	
}