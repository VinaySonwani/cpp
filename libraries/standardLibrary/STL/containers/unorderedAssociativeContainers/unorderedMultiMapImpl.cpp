
/*
We can not store duplicates in unordered_map, that is if we have a key-value pair already in our unordered_multimap and another pair is inserted, then both will be there whereas in case of unordered_map the previous value corresponding to the key is updated by the new value that is only would be there. Even can exist in unordered_multimap twice.

Internal Representation: 
The internal implementation of unordered_multimap is the same as that of unordered_map but for duplicate keys, another count value is maintained with each key-value pair. As pairs are stored in the hash table, there is no particular order among them but pairs with the same keys come together in the data structure whereas pairs with the same values are not guaranteed to come together. 
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	unordered_multimap<int, int> ummap1;								// Declaration

																/*Assignment not supported using [ ] because values corresponding to a key 																   are not unique, there can be many values associated with a single key so [] 																   operator can not be applied to them. */

	ummap1 = {{12,24}, {34, 45}, {67, 46}};								// Assignment possible using Initializer list.

	unordered_multimap<int, int> ummap2 {{1,11}, {3, 21}, {3,31}};			// Initialization

	for (auto i : ummap2)											// Access.
		cout << i.first << "\t" << i.second << endl;	

	ummap1.insert(pair<int, int> (37, 57));								// Inserting single key-value pair.
	ummap1.insert(make_pair(11, 22));								
	ummap1.insert({78, 82});
	ummap1.insert({{21,23}, {31,32}});									// Inserting multiple key-value pair.

	for (auto i : ummap1)
		cout << i.first << "\t" << i.second << endl;

	unordered_multimap<int, int>::iterator itr2 = ummap2.find(3);			/* Returns an iterator to the key-value pair whose key is passed as the 																	    argument. Single key-value pair is selected in case of multiple duplicate 																	    keys */
	cout << itr2->first << "\t" << itr2->second << endl;						// Printing the key-value pair using the returned iterator.

	int count = ummap2.count(3); 										// Returns the count of values associated with a key

	ummap2.erase(1);												/* Removing key-value pair whose key is passed as the argument. Single 																	    key-value pair is removed in case of multiple duplicate keys. */
	ummap2.erase(itr2); 											/* Removes a key-value pair whose iterator is passed as the 
																    argument. Removes a single key-value pair in case of multiple duplicate 																	    keys */															for (auto i : ummap2)											   
		cout << i.first << "=> " << "\t" << i.second << "\n" << endl;

	ummap2.erase(ummap2.begin(), ummap2.end());						// Removing elements based on the range
	ummap2.empty() ? cout << "true" << endl : cout << "False" << endl;

	ummap1.clear();												// This is also supported
	ummap1.empty() ? cout << "true" << endl : cout << "False" << endl;

	return 0;
}




