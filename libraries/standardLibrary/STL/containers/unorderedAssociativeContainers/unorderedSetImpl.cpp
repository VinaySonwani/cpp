
/*
An unordered_set is an unordered associative container implemented using a hash table where keys are hashed into indices of a hash table so that the insertion is always randomized. The unordered_set can contain a key of any type – predefined or user-defined data structure but all the keys must be unique.
*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	unordered_set <int> uset1;							// Declaration

	uset1 = {11, 22, 33};								// Assignment possible with Initializer list.

	unordered_set<int> uset2 {3,5,6,7,1};					// initialization 

	for (auto i : uset2)									// Access
		cout << i << endl;

	uset1.insert(1);									// Inserting elements. Stored in the random order
	uset1.insert(2);
	uset1.insert(1);
	for (auto i : uset1)
		cout << i << endl;

	unordered_set<int> :: iterator itr2 = uset1.find(2);			// Finding an element passed as the argument and returning an iterator
	cout << *itr2 << endl;

	uset1.erase(2);									// Removing an element passed as the argument 
	for (auto i : uset1)
	cout << i << endl;

	uset2.erase(uset2.begin(), uset2.end());					// Removing elements based on a range

	uset1.clear();										// Removing all the elements

	return 0;
}

// Given an array(list) of integers, find all the duplicates among them.




