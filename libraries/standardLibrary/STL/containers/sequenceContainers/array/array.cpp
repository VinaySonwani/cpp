
/*
The introduction of array class from C++11 has offered a better alternative for C-style arrays. The advantages of array class over C-style array are :- 
 

Array classes knows its own size, whereas C-style arrays lack this property. So when passing to functions, we don’t need to pass size of Array as a separate parameter.
With C-style array there is more risk of array being decayed into a pointer. Array classes don’t decay into pointers
Array classes are generally more efficient, light-weight and reliable than C-style arrays.
*/


#include <iostream>
#include <array>		// Header
#include <algorithm> 	// For std::reverse
using namespace std;

int main()
{
	array <int, 5> array1;		// Declaration
	array1.at(0) = 1;			// Assignment type-1

	array1[1] = 2;				// Assignment type-2

	array < int, 5> array2 = {10, 20, 30, 40, 50};			// Initialization


	cout << array1.at(0) << endl;			// Access
	cout << array1[1] << endl;			
	cout << get<1>(array1) << endl;		

	int &a = array2.front();
	int &b = array2.back();

	cout << a << endl;
	cout << b << endl;

	cout << array2.size() << endl;
	cout << array2.max_size() << endl;

	array1.swap(array2);				// both the arrays should be of same size
	for (int i=0; i < array2.size(); i++)
		cout << array1.at(i) << endl;

	array1.empty() ? cout << "empty" : cout << "false";

	array1.fill(9);
	for (int i=0; i < array2.size(); i++)
		cout << array1.at(i) << endl;

	reverse(array1.begin(), array1.end()); 		// using std::reverse function from the algorithm header to reverse the elements of the array 
										// since it 	doesn't has a reverse method.

	return 0;
}


