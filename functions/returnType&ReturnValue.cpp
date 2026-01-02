
#include <iostream>
using namespace std;

void fn1()					// takes no parameter & has void return type so no return value.
{
	cout << "fn1" << endl;
}

void fn2(int a)				// takes parameter & has void return type so no return value.
{
	cout << a << endl;
}

int fn3(int b)				// takes parameter & has int return type.
{
	return (b +1);			// Return value of int type bcoz has int return type.
}

int main()
{
	fn1();	

	fn2(5);
	
	fn3(7);					// Not an issue
	int c = fn3(9);				// Old fashioned. Uses an int type variable to store the returned value then printing it.
	cout << c << endl;
	cout << fn3(11) << endl;		// latest

	// cout << fn1() << endl;		// Error. cout needs some return value to print.

	return 0;
}



// return type based on the return value. calling function must have the type same as return type to hold the 
// value. Applies to reference and pointers.


