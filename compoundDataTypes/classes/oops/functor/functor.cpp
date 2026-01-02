
// Functor uses function pointer as the parameter.

#include <iostream>
using namespace std;

class Increment
{
	int i;
public:
	Increment(int a) : i(a) { }

	int operator ( ) (const int &num)
	{
		return ( i + num );
	}
};

int main()
{
	int arr[ ] = {1,2,3,4,5};
	int size = sizeof(arr) / sizeof(arr[0]);
	transform(arr, arr+size, arr, Increment(5));		/* Here, Increment is a Function Object or Functor, which is special kind of object that contain an 													    overloaded operator() that make them callable like a function. */

	for(int i = 0; i < size; i++)
		cout << arr[i] << endl;
	
	return 0;	
}


/*

How to pass a functor: Using function pointer. Transform internally uses it to store Increment here.

*/



