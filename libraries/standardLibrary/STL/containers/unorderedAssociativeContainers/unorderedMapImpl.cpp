
/*
unordered_map is an associated container that stores elements formed by the combination of a key value and a mapped value. The key value is used to uniquely identify the element and the mapped value is the content associated with the key. Both key and value can be of any type predefined or user-defined. In simple terms, an unordered_map is like a data structure of dictionary type that stores elements in itself. It contains successive pairs (key, value), which allows fast retrieval of an individual element based on its unique key.

Internally unordered_map is implemented using Hash Table, the key provided to map is hashed into indices of a hash table which is why the performance of data structure depends on the hash function a lot.
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	unordered_map <int, int> umap1;								// Declaration

	umap1[1] = 11;												// Assignment using [ ] operator
	umap1[2] = 21;
	umap1[2] = 31;

	umap1 = {{3, 33}, {4, 44}};									// Assignment using Initializer List. This overwrites the previous values.

	unordered_map<int, int> umap2 {{5, 51}, {7,71}, {11,111}};			// Initialization  

	for(auto i : umap1)                                      						// Access
		cout << i.first  << "=> "<< i.second  << endl;

	umap1.insert(pair<int, int> (9, 99));								// Inserting single key-value pair.
	umap1.insert(make_pair(5, 55));	
	umap1.insert({10, 100});							

	unordered_map<int, int> ::iterator itr2 = umap1.find(3);				/* Finding key-value pair whose key is passed as the argument. Returns
															   an iterator to the pair if found otherwise the end iterator (creates 																           segmentation fault). */
	cout << itr2->first << "=> " << itr2->second  << endl;

	cout << umap2.at(7) << endl;									// Finding value using at(), key is passed as the argument

	umap2.erase(7);											// Removing value by passing key as the argument
	for(auto i : umap2)
		cout << i.first  << "=> "<< i.second  << endl;	

	umap2.erase(umap2.begin(), umap2.end());						// Removing all the pairs
	(umap2.empty()) ? cout << "true" << endl : cout  << "False" << endl;

	return 0;	
}

// Given a string of words, the task is to find the frequencies of the individual words:




