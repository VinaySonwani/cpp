
#include <iostream>
#include <list>
using namespace std;

int main()
{
	list <int> list1;										// declaration

													// Assignment

	list <int> list2 {1,2,3,4,5};								// Initialization

	list < int > :: iterator itr1;								// Access
	for ( itr1 = list2.begin(); itr1 != list2.end(); itr1++)
		cout << *itr1 << endl;
	for ( auto i = list2.begin(); i!= list2.end(); i++ )
		cout << *i << endl;
	for ( auto i : list2)			
		cout << i << endl;

	list1.push_front(11);									// insert an element from the front
	list1.push_back(22);								// insert an element from the back
	list1.insert(list1.begin(), 33);							// insert at a specific position
	for ( auto i: list1)			
		cout << i << endl;

	list2.pop_front();									// Remove an element from the front
	list2.pop_back();									// Remove an element from the back
	list1.erase(list1.begin());								// Removing from a specific position
	list1.clear();										// Removing all the elements

	list2.reverse();										// Reverses the list

	list2.sort();										// Sorts in increasing order

	for ( auto i: list2)			
		cout << i << endl;
	
	return 0;	
}

/*
It is generally implemented using a dynamic doubly linked list with traversal in both directions.
Faster insert and delete operation as compared to arrays and vectors.
It provides only sequential access. Random Access to any middle element is not possible
It is defined as a template so it is able to hold any data type.
It operates as an unsorted list would, which implies that by default, the list’s order is not preserved. However, there are techniques for sorting.
*/



