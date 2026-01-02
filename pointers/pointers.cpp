
#include <iostream>
using namespace std;

int main()
{
	// declaration
		// Using AMA for the Pointer type. It's only supported.
			int* ptr;	// or int *ptr2 = NULL;		/* int* represents  the Pointer Type and ptr is the Pointer which is nothing but a special variable which 											    can only store the address of other variables as the value. Bcoz ptr has the int data type so it can 												    only store the address of an integer type variable. It is called that ptr points to an integer type. It's a 											    good practice to initialize it with NULL so that it won't point to an invalid memory location, a situation 											    where a Pointer is called a Dangling Pointer. */ 

	// assignment
		int b = 2;
		ptr = &b;		// & ( address of ) operator returns the address of a variable

	// initialisation
		int* ptr3 = &b;

	// access
		// Accessing the address of the pointer
			cout << &ptr << endl;
		
		// Accessing the address stored by the pointer
		cout << ptr << endl;			// pointer is just a variable so here by providing ptr to cout, it is printing the value stored by ptr i.e. the hex address. 
  
		// Accessing the value stored at the address pointed by the pointer
		cout << *ptr << endl;		/* standard way of accessing the value at the location pointed by a pointer. It is called de-referencing the pointer and 
								* operator is called de-referencing operator. */

	*ptr3 = 4;					// De-referencing is also used for assigning a value to the memory location pointed by a pointer. 2nd use of de-referencing. 


	// cout << *ptr2 << endl;		// it creates segmentation fault.
	cout << *ptr3 << endl;

	cout << sizeof(ptr) << endl;	
	
	char *ptr4;
	cout << sizeof(ptr4) << endl;

	double *ptr5;
	cout << sizeof(ptr5) << endl;

	
	// Pointer arithmetic
		// pending

	return 0;

	// Pointer will be destroyed once this block is ended
}


/*

int* ptr = &b;	=> ptr and &b are called as Pointers interchangeably bcoz after this statement, ptr is nothing but &b.
	
Bcoz Pointer Type only uses AMA so Pointer has block scope and duration.

Write about the memory layout of a Pointer Type along with the variable it's pointing to.

NULL means nothing in case of Pointers. nullptr also means the same. Former is used for initialisation and latter is used for comparison. 
Ref: https://www.geeksforgeeks.org/understanding-nullptr-c/   

What can a Pointer points to: To a variable or object, dynamically allocated memory or a C style const string. 

*/



