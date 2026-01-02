
#include <iostream>
using namespace std;

int main()
{
	// Declaration
		// Using DMA for the Fundamental Data-type using new operator.
		int *ptr = new int;		/* In Dynamic Memory Allocation, C++ uses the new operator to allocate the memory equal to the size of the Data Type 									    in the program's Heap at run time and returns the address of this memory. A Pointer is then used to store this 										    address. All the standard Pointer rules apply on this Pointer. Here, new operator allocates the memory equal to the 
							    size of int and returns the address, Pointer ptr stores this address.  */
			
	// Assignment
		*ptr = 5;

	// DMA + Initialization
	   	int *ptr2 = new int(10);		// using Direct Initialization.

	// Access	
		cout << *ptr << endl;
		cout << *ptr2 << endl;

	// Now releasing memory pointed by ptr & ptr2 using delete operator.
		delete ptr;		// Delete operator clears the memory pointed by ptr but it does not destroy ptr. 									  

		ptr = NULL; 		// bcoz the memory is cleared which was pointed by ptr, ptr is now left pointing to an invalid memory location. This makes
						// ptr a Dangling Pointer. To prevent it, it is must that ptr is assigned a "NULL".

		delete ptr2;
		// delete ptr2; 		// Not assigning to NULL and double delete causes an issue

		int *ptr5;		
		int *ptr6 = NULL;
		// delete ptr5;	// It's an error bcoz doing delete on an uninitialised pointer. 
		delete ptr6;	// Not an issue. It's ok to do delete on a pointer which was initialised with NULL.


	return 0;
}


/*

What's involved: Data, Data-Type, Pointer, new operator, DMA.

When to use it: When you want to make the duration of the Data dynamic.

Have local scope i.e. you need to pass it explicitly if want to use any where else.

Have dynamic duration i.e. you are responsible to delete it.


Look at the data you are going to store. If it's of known size and once occurring then use AAM, if it's of known size but occurring again and again then use DAM.

when to destroy a dynamic memory : When the value hold by it is moved to a persistent storage or printed etc.

Create a diagram for DMA.

*/








