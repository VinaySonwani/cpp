
# include <iostream>
# include <forward_list>
using namespace std;

int main()
{
	forward_list < int > fl1;								// Declaration

													// Assignment not supported

	forward_list <int> fl2 { 1,2, 3,4, 5};						// Initialization

	forward_list < int > :: iterator itr1;						// Access
	for ( itr1 = fl2.begin(); itr1 != fl2.end(); itr1++)
		cout << *itr1 << endl;
	for ( auto i = fl2.begin(); i != fl2.end(); i++ )
		cout << *i << endl;
	for ( auto i : fl2 )
		cout << i << endl;

	fl1.push_front( 99 );									// inserting at the front
	fl1.insert_after( fl1.begin(), 89);						// inserting at a specific position
	for ( auto i : fl1 )
		cout << i << endl;

	fl2.pop_front();										// removing from the front
	fl2.erase_after ( fl2.begin());							// removing from a specific position
	for ( auto i : fl2 )
		cout << i << endl;
	fl1.erase_after (fl1.begin(), fl1.end());					// removing the entire range
	fl2.remove(4); 										// removes the element passed as the argument
	for ( auto i : fl2 )
		cout << i << endl;
	fl2.remove_if ( [ ] ( int x ) { return x > 20; } );				// conditional remove
	fl2.clear();										// removes all the elements

	forward_list <int> fl3 { 0, 3, 5, 7};
	fl3.reverse();										// Reverses the elements	
	for ( auto i : fl3 )
		cout << i << endl;
	return 0;
}





