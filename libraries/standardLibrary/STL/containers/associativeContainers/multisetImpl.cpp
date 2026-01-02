
/*
A Multi-Set can contain duplicate values. Remaining properties similar to Sets.
*/
 
#include <iostream>
#include <set>
using namespace std;

int main()
{
	multiset<int> mls1;						// Declaration

	mls1 = {5, 6};							// Assignment using Initiazer List.
	
	multiset<int> mls2 {11, 12, 12, 13, 15};		// Initialization

	for (auto i : mls2)						// Access
		cout << i << endl;	

	mls1.insert(1);							// Inserting elements. Auto arranges in ascending order
	mls1.insert(1);
	mls1.insert(2);
	mls1.insert(3);
	mls1.insert(4);

	for (auto i : mls1)
		cout << i << endl;	

	multiset <int, greater<int>> mls3 {31, 33, 45, 57};		// Arranging elements in descending order
	for (auto i : mls3)
		cout << i << endl;	

	mls1.erase(3);							// Removing element based on argument
	for (auto i : mls1)
		cout << i << endl;

	mls2.erase(mls2.begin(), mls2.find(13));		// Removing element by starting from a specific position and before the element provided as the argument.
	for (auto i : mls2)
		cout << i << endl;

	mls2.clear();							// Removing all the elements

	multiset <int> :: iterator itr1 = mls1.find(2);	// Finding an element and returning an iterator

	return 0;
}



