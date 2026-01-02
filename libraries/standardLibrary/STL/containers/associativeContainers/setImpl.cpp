
/*
Sets are a type of associative container in which each element has to be unique because the value of the element identifies it. The values are stored in a specific sorted order i.e. either ascending or descending.
*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
	set <int> set1;					// Declaration

	set1 = {9};					// Assignment using Initiazer List

	set <int> set2 {1, 2, 3, 4};		// Initialization

	for ( auto i : set2 )				// Access
		cout << i << endl;

	set1.insert(6);					// inserting element. Elements are auto arranged in ascending order
	set1.insert(7);
	set1.insert(5);
	for ( auto i : set1 )				
		cout << i << endl;	

	set1.insert(set1.begin(), 8);		// inserting element at a specific position but it auto arranges
	for ( auto i : set1 )				
		cout << i << endl;	

	// arranging elements in descending order
	set <int, greater<int>> set3 {1,3, 5, 2};
	for ( auto i : set3 )				
		cout << i << endl;

	set <int> set4 {7, 6, 8, 1};
	set4.erase(6); 					// removing the element provided as the argument
	set4.erase(set4.begin());			// removing element from a specific position
	for ( auto i : set4 )				
		cout << i << endl;

	set <int> set5 {12, 11, 24};
	set<int> ::iterator itr1 = set5.find(11);				// Returns an iterator to the element given as the argument
	set<int> ::iterator itr2 = set5.find(31);				// Returns an iterator to the last element if the element as 													// the argument not found
	for (*itr1; itr1 != set5.end(); itr1++ )
		cout << *itr1 << endl;
	for (*itr2; itr2 != set5.end(); itr2++ )
		cout << *itr2 << endl;

	set5.clear();								// Removes all the elements
	
	return 0;
}



