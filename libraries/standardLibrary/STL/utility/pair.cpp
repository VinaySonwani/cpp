
/*
Pair is used to combine together two values that may be of different data types. Pair provides a way to store two heterogeneous objects as a single unit. It is basically used if we want to store tuples. The pair container is a simple container defined in <utility> header consisting of two data elements or objects. 

The first element is referenced as ‘first’ and the second element as ‘second’ and the order is fixed (first, second).
Pair can be assigned, copied, and compared. The array of objects allocated in a map or hash_map is of type ‘pair’ by default in which all the ‘first’ elements are unique keys associated with their ‘second’ value objects.
To access the elements, we use variable name followed by dot operator followed by the keyword first or second.
*/

#include <iostream>
#include <utility>
using namespace std;

int main()
{
	pair <int, int> pr1;										// Declaration

	pr1.first = 1;											// Assignment
	pr1.second = 2;

	pr1 = {2, 4};											// Assignment using Initializer list. Overwrites previous values.

	pair <int, char> pr2 (2, 'a');								// Initialisations
	pair <int, int> pr3(3, 31);
	pair <int, int> pr4(pr3);
	pair <int, int> pr5 = make_pair(4, 41);
	pair <int, int> pr6 = {5, 51};

	cout << pr1.first << "\t" << pr1.second << "\n" << endl;			// Access
	cout << pr2.first << "\t" << pr2.second << "\n" << endl;
	cout << pr3.first << "\t" << pr3.second << "\n" << endl;
	cout << pr4.first << "\t" << pr4.second << "\n" << endl;
	cout << pr5.first << "\t" << pr5.second << "\n" << endl;
	cout << pr6.first << "\t" << pr6.second << "\n" << endl;

	pair <int, int> pr7;										/* If not initialized, the first value of the pair gets automatically 															  		    initialized */
	cout << pr7.first << "\t" << pr7.second << "\n" << endl;

	pair <int, int> pr8 {6, 61};									// tie method
	int a, b;
	tie(a, b) = pr8;
	cout << a << "\t" << b << "\n" << endl;
	pair <int, int> pr9 {7, 71};
	tie(a, ignore) = pr9;										// mind ignore
	cout << a << "\t" << b << "\n" << endl;
	pair <int, pair<int, int>> pr10 {8, {9,91}};						// Pair of Pairs and tie method
	int x, y, z;
	tie(x, ignore) = pr10;
	tie(y, z) = pr10.second;
	cout << x << "\t" << y << "\t" << z <<  "\n" << endl;

	cout << pr8.first + pr9.second << endl;						// Functions with Pairs
	return 0;
}




