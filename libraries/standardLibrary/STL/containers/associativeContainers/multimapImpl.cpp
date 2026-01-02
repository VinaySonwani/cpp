
/*
A Multi-Map can have Duplicate Keys having similar or different values.
*/


#include <iostream>
#include <map>

using namespace std;

int main()
{
	multimap <int, int> mmp1;					// Declaration

	// mmp1[3] = 33;							// Assignment not possible using Subscript Operator '[ ]' is not provided.
	mmp1 = {{7, 77}, {8, 88}};					// Assignment possible using Initializer List.

	multimap<int, int> mmp2 {{4, 44}, {4, 44}};		// Initialization

	multimap<int, int> :: iterator itr1;					// Access
	for ( itr1 = mmp1.begin(); itr1 != mmp1.end(); itr1++)
	{
		cout << "Key: " << itr1->first << endl;
		cout << "Value: " << itr1->second << endl;
	}
	for ( auto i = mmp1.begin(); i != mmp1.end();i++)
	{
		cout << "Key: " << i->first << endl;
		cout << "Value: " << i->second << endl;
	}
	for(auto i : mmp2)
		cout << "Key: " << i.first << "\t" <<  "Value: " << i.second << endl; 

	mmp1.insert (pair<int, int> (1, 11));				// Inserting a Key-value pair
	mmp1.insert (make_pair (1, 12));
	mmp1.insert ({2, 13});
	for(auto i : mmp1)
		cout << "Key: " << i.first << "\t" <<  "Value: " << i.second << endl; 

	return 0;	
}