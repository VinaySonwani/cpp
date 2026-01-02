
#include <iostream>
using namespace std;

int main()
{
	// declaration
		// Using AMA for an Array Type.
			int arr[2];			/* a "[ ]" after a variable name with size is a standard representation of an Array Type.
                                      			   Can't omit the size otherwise compilation error. */
		
		// Using DMA for an Array-Type.
			int *dar = new int[2];		/* Standard representation when an Array-type is allocated dynamically.
								   Can't omit the size here as well otherwise compilation error. */

	// assignment
		arr[0] = 1;
		arr[1] = 2;
		dar[0] = 3;
		dar[1] = 4;

	//initialisation
		// AMA + initialization
			int far[2] = {}; 		// using Value Initialization.
			int bar[2] = {5,6}; 	// using Initializer list using Copy List Initialization.
			int car[] = {9,10,11,12,13};	// can omit the size while using the ILUCLI.
			int har[2]{ 14,15 }; 		// using the Initialiser List using Direct List Initialization.
			int xar[]{ 16,17 }; 		// can omit the size while using the ILUDLI.

		// DMA + initialization
			int* mar = new int[2]();        // Using Direct initialization. It initialises each element as zero.
			int *nar = new int[2]{ 18,19 };		// using the Initializer List using direct list initialization.
			int* has = new int[]{45,80};	// can omit the size while using the ILUDLI.
                                                        
		
	//accessing the elements
		cout << arr[0] << dar[1] <<  bar[1] << car[0] << nar[1] << har[0]<< xar[0] << far[1] << mar[1] << endl;		// standard way of accessing the 																								// array elements. It's called the 																								// indexing. 

		for(int i=0; i<2; i++)		// by using a loop
		{
			cout << car[i] << endl;
		}

		for( auto i : car )				// C++11 range based for loop.
			cout << i << endl;


	// Obtaining size.
		int lar[] = {1,2,3,4,5};
                cout << sizeof(lar) / sizeof(lar[0]) << endl;		// standard way of getting the size of an array type. 

		cout << sizeof(dar) << endl;

	// Releasing memory occupied by dynamically allocated Array-types.
		delete [] dar;
		delete [] mar;
		delete [] nar;
		delete [] has;


	char var[6] = {'M','O','B','I','L','E'};	// char array elements are written in single qoates.
	for(int l=0; l<6; l++)
	{
		cout << var[l] << endl;
	}

		return 0;
}


/*

(arr , arr+n)     arr = first element, arr+n = last element. 

Notice we have to provide the size explicitly when declaring or when initialising by providing the elements to the Array bcoz Array size is always 
fixed. This is done bcoz Array keeps its elements on a contiguous memory location. If we try to make it larger then there might not be the next                      
contiguous memory space available.

Reference: https://www.geeksforgeeks.org/what-is-array/

*/

 

