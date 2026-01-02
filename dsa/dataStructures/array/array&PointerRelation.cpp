
#include <iostream>
using namespace std;


int main()
{
	int arr[4] = {1,2,3,4};
	cout << *(arr+1) << endl;
	
	int k = 8;
	int *ptr = &k;
	cout << ptr[0] << endl;
	return 0;
}

// An array name is a pointer (to its first element) and a pointer is an array name (whose element is the value contained at -
// - the address pointed by the pointer).
