
/* map has key & value pair. keys are arranged in ascending order. */


#include <iostream>
#include <map>
using namespace std;

int main()
{
	map <string, int> map1;							// Declaration

	map1["one"] = 1;								// Assignment
	map1["two"] = 2;
	map1["three"] = 3;

	// map1 = {{5, 55}, {6, 66}};							// Assignment using Initializer list is not supported.

	map<int, int> map3 {{1, 11}, {2, 22}, {3, 33}};			// Initialization

	map <string, int> :: iterator itr1;					// Access
	for( itr1 = map1.begin(); itr1 != map1.end(); itr1++ )
	{
		cout << "Key: " << itr1->first << endl;
		cout << "Value: " << itr1->second << endl;
	}
	for( auto i = map1.begin(); i != map1.end(); i++ )
	{
		cout << "Key: " << i->first << endl;
		cout << "Value: " << i->second << endl;
	}
	for(auto i : map3)
		cout << "Key: " << i.first << "Value: " << i.second << endl;

	map<int, int> map2;
	map2.insert(pair<int, int> (1, 11));					// Inserting Key-Value pair 
	map2.insert(make_pair (2, 12));
	map2.insert({3, 13});

	for(auto i : map2)
		cout << "Key: " << i.first << "Value: " << i.second << endl;

	map2.erase(map2.begin(), map2.find(2));			// Removing a key-value pair by starting at a specific position
	for(auto i : map2)
		cout << "Key: " << i.first << "Value: " << i.second << endl;

	map1.erase("one");								// Removing a specific key
	for(auto i : map1)
		cout << "Key: " << i.first << "Value: " << i.second << endl;

	map2.clear();									// Removing all the elements

	map <string, int> :: iterator itr3 = map1.find("two");		// Finding a key and returning an iterator for it

	return 0;
}



