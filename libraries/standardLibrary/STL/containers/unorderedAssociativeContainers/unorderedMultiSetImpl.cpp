
/*
The unordered_multiset in C++ STL is an unordered associative container that works similarly to an unordered_set. The only difference is that we can store multiple copies of the same key in this container.

It is also implemented using a hash table. Internally when an existing value is inserted, the data structure increases its count which is associated with each value. A count of each value is stored in unordered_multiset, it takes more space than unordered_set (if all values are distinct).

Due to hashing of elements, it has no particular order of storing the elements so all element can come in any order but duplicate element comes together.

Reference: https://www.reddit.com/r/cpp_questions/comments/tydquw/what_is_the_purpose_of_an_stdunordered_multiset/

*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	unordered_multiset<int> umset1;							// Declaration

	umset1 = {1,3,3,5,7,7};									// Assignment possible with Initializer List

	unordered_multiset<int> umset2 {2,5,7,8,8};					// Initialization

	for (auto i : umset2)										// Access
		cout << i << endl;

	umset1.insert(13);										// Inserting elements 
	umset1.insert(13);
	umset1.insert(11);
	for (auto i : umset1)
		cout << i << endl;

	unordered_multiset<int>::iterator itr2 = umset1.find(13);		// Finding an element passed as the arguments and returning an iterator.
	cout << *itr2 << endl;

	umset1.erase(11);										// Removing an element passed as the argument
	for (auto i : umset1)
		cout << i << endl;

	umset1.erase(umset1.begin(), umset1.end());				// Removing elements based on a range

	umset2.clear();										// Removing all the elements
	
	return 0;
}



