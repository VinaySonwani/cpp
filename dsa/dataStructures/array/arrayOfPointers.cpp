
#include <iostream>
using namespace std;

int main()
{
	// Array of pointers = An array type whose elements are of Pointers type.
    	
	int arr[] = { 1, 2, 3 };
 
    	// Array type to store elements which are either Pointer type or address of a variable.
    	
	int *ptr[3];		// mind the * and []
 
   	for (int i = 0; i < 3; i++) 
	{
        	ptr[i] = &arr[i];
    }
 
    // printing values using pointer
    for (int i = 0; i < 3; i++)
    {
 
        cout << *(*ptr + i) << endl;
    }
}
