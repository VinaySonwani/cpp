
#include <iostream>
using namespace std;


int main()
{
	// Pointer to the first element.
		int arr[4] = {5,2,3,6};
		int *ptr = arr;
		ptr[0] = 1;
		ptr[3] = 4;

		cout << *ptr << *(ptr+1) << *(ptr+2) << *(ptr+3) << endl; 
		int i;
		for(i=0; i<4; i++)
		{
			cout << *(ptr+i) << endl;
		}

	// Pointer to the whole array

		int(*a)[5]; // mind the paranthesis around "a" for this type of declaration.
 		int b[5] = { 1, 2, 3, 4, 5 };
 		int i = 0;

 		// Points to the whole array b
 		a = &b;
 		for (i = 0; i < 5; i++)
          		cout << *(*a + i) << endl;
		
		return 0;
}

