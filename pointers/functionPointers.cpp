
#include <iostream>
using namespace std;

void fn1()
{
	cout << "fn1" << endl;
}

void fn2(double c)
{
	cout << "fn2 value of argument: " << c << endl;
}

int fn3(int a, int b)
{
	return (a + b);
}

int main()
{
	// declaration
		void (*fnptr1)( );		// parentheses around *fnptr1 are necessary for precedence reasons, without them the definition becomes 
							// void* fnptr1( ) which means the forward declaration of a function that takes no arguments and returns a 
							// void pointer.	

	// assignment
		fnptr1 = &fn1;			// or & can be removed as the fn name is the function pointer.

	// calling a function using fn pointer		
		(*fnptr1)( );			// Implicit dereference.
		fnptr1( );				// Explicit dereference.
	
	// Initialization
		void (*fnptr2) (double) {fn2};		// C++11 bcoz using list initialization.
		(*fnptr2) (3.7);
		fnptr2(3.7);

		int (*fnptr3) (int, int) {fn3};	
		cout << (*fnptr3) (9, 9) << endl;	// Implicit dereference.
		cout << fnptr3 (9, 9) << endl;		// Explicit dereference.

	return 0;
}



/*

1. A function name is a function pointer to the function.

2. A function passed as an argument to a function, is called a Callback function.

pending: write a program to pass a function as an argument to another function.

*/



